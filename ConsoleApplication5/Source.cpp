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
			std::cout << "��";
		}
		if (num == 1) {
			std::cout << "�";
		}
		if (num == 2) {
			std::cout << "�d";
		}
		if (num == 3) {
			std::cout << "��";
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
	std::cout << "�d�������J���C�C�I�I" << std::endl;

	return 0;
}