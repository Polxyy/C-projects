

#include <iostream>

using namespace std;

struct Rectangle {
	double width;
	double height;
};

double area(Rectangle r) {
	return r.width * r.height;
}
int main() {
	Rectangle r;
	cout << "Enter rectangle height :" << endl;
		cin >> r.height;
	cout << "Enter rectangle width :" << endl;
		cin >> r.width;
	cout << "Area is :" << area(r);
	return 0;
}

