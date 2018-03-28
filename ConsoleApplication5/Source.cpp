#include<iostream>
#include<array>
#include<random>
#include<string>
#include<vector>

int main() {
	std::array<std::string, 4> ar;
	ar[0] = "kon";
	ar[1] = "paku";
	ar[2] = "you";
	ar[3] = "mu";

	bool flag=true;

	std::random_device rnd;
	std::mt19937 mt(rnd());
	std::uniform_int_distribution<> rand4(0, 3);

	std::string str="start";
	std::vector<std::string> v;

	int i = 0;

	do {

		int num = rand4(mt);

		if (num== 0) { 
			std::cout << "魂";
		}
		if (num == 1) {
			std::cout << "魄";
		}
		if (num == 2) {
			std::cout << "妖";
		}
		if (num == 3) {
			std::cout << "夢";
		}

		v.push_back(ar[num]);

		if (i > 3) {
			str = v[i-3] + v[i-2] + v[i-1] + v[i];
		}
	

		if (str == "konpakuyoumu") {
		  flag = false;
		}

		i++;

	} while (flag);

	std::cout << "\n\n\n" << std::endl;
	std::cout << "妖夢ちゃんカワイイ！！" << std::endl;

	return 0;
}