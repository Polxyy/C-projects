#include <iostream>
#include <vector>
using namespace std;

int main() {
	//Definition
	vector<int> v;
	int chislo;
	//Vuvevjdane
	while (true) {
		cout << "Number: "; cin >> chislo;
		if (chislo == -1) break;
		v.push_back(chislo);
	}
	//Izvejdane
	cout << "Vector: ";
	//for (int i = 0; i < size(v); i++) {
	//	cout << v[i] << '\t';
	//}
	// 	//for (vector<int>::iterator p = v.begin(); p != v.end(); p++) {
	//	cout << *p << ",";
	//}
	for (vector<int>::reverse_iterator p = v.rbegin(); p != v.rend(); p++) {
		cout << *p << ",";
		cout << endl;
	}
}