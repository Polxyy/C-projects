#include <iostream>


int main() {
	int n;
	int pr;
	std::cout << "n: " << std::endl;
	std::cin >> n;
	if (n == 1 || n == 0) {
		std::cout << "No prime numbers in range!" << std::endl;
	}
	for (int i = 2; i <= n; i++) {
		pr = 0;
		for (int c = 2; c <= i/2; c++) {
			if (i % c == 0) {
				pr = 1;
				break;
			}
		}
		if (pr == 0 && n != 1){
			if (i < 0) {
				std::cout << "-" << i << " ";
			}
			else if (i > 0){
				std::cout << i << " ";
			}
		}
	}
	return 0;
}