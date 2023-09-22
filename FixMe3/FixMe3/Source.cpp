#include <cmath>
#include <iostream> // Липсва библиотека iostream 

void moreMagic(int*& read, int count, int exp, int*& write) {
	int table[10] = { 0 }; //създава масив от 10 елемента

	for (int c = 0; c < count; c++) { 
		const int index = (read[c] / exp) % 10;
		table[index]++;
	}

	for (int c = 1; c < 10; c++) {
		table[c] += table[c - 1];
	}

	for (int c = count - 1; c >= 0; c--) {
		const int index = (read[c] / exp) % 10;
		write[table[index] - 1] = read[c];
		table[index]--;
	}

	int* a = read;
	read = write;
	write = a;
}

void magic(int* a, int count, int* b) {
	if (count < 2) { //ако размерът на масива е по- малък от 2 спира програмата
		return;
	}
	int find = 0;
	for (int c = 1; c < count; c++) {
		if (a[c] > a[find]) {//ако един елемент на масива е по- голям от този преди него променливата find взима стойността на мястото му в масива
			find = c;
		}
	}
	const int target = a[find];
	const int base = log10(target) + 1;
	std::cout  << "target:" << target << "base:" << base << std::endl;

	for (int c = 0, exp = 1; c < base + (base & 1); c++, exp *= 10) {
		moreMagic(a, count, exp, b);
	}
}


int main() {
	int a[200], b[200];
	int n;
	std::cin >> n;
	for (int c = 0; c < n; c++) {
		std::cin >> a[c];
	}
	magic(a, n, b);
	for (int c = 0; c < n; c++) {
		std::cout << a[c] << ' ';
	}
	return 0;
	//програмата взима за вход елементи и ги принтира сортирани
}