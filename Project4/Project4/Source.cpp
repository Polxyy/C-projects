#include <iostream>


int main() {
	
	int n;
	std::cout << "Enter your number: " << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	if (n > 3000) {
		std::cout << "Enter a number smaller than 3000!" << std::endl;
		return 0;
	}
	else {
		std::string rim[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
		int st[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
		std::string rezultat = "";
		for (int i = 0; i < 13; i++) {
			while (n - st[i] >= 0) {
				rezultat += rim[i];
				n = n - st[i];
			}
		}
		std::cout << "Roman: " << rezultat << std::endl << std::endl;
	}
	
	return 0;
}
