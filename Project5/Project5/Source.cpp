#include <iostream>

using namespace std;

int main() {
	int n, n1, nlast, swap;
	cout << "Enter 4 digit number:" << endl;
	cin >> n;
	if (n > 9999 or n < 1000) {
		cout << "Number is not 4 digits!" << endl;
	}
	else {
		nlast = n % 10;
		n1 = n / 1000;
		swap = nlast;
		swap = swap * 1000;
		swap += n % 1000;
		swap = swap - nlast;
		swap = swap + n1;
		cout << swap;
	}
}