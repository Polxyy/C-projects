#include <iostream>
#include <vector>
using namespace std;

int main() {
	//Definition
	//vector<int> v;
	//int chislo;
	//int num;

	////Vuvevjdane
	//while (true) {
	//	cout << "Number: "; cin >> chislo;
	//	if (chislo == -1) break;
	//	v.push_back(chislo);
	//}
	//Izvejdane
	//cout << "Vector: ";
	//for (int i = 0; i < size(v); i++) {
	//	cout << v[i] << '\t';
	//}
	// 	//for (vector<int>::iterator p = v.begin(); p != v.end(); p++) {
	//	cout << *p << ",";
	//}
	//for (vector<int>::reverse_iterator p = v.rbegin(); p != v.rend(); p++) {
	//	cout << *p << ",";
	//	cout << endl;
	//}

	//Vuvedete chislo ot klaviaturata, namerete sumata na vsichki chilsa ot vektora po-golemi ot vuvedenoto chislo

	//cout << "Chislo: ";
	//cin >> num;
	//int sum = 0;
	//for (vector<int>::iterator p = v.begin(); p != v.end(); p++) {	
	//	if (*p > num)
	//	{
	//		sum += *p;
	//	}
	//}
	//cout << sum;
	vector<int> sort;
	int number;
	int min = 0;
	int max = 0;

	while (true) {
		cout << "number: ";
		cin >> number;
		if (number == -1) break;
		int pos = 0;
		// Namirame poziciqta vuv vektora
		while (pos<sort.size() && number>sort[pos]) pos++;
		if (pos == sort.size()) sort.push_back(number); // Dobavqme
		else sort.insert(sort.begin() + pos, number);	// Vmukvame
		// Izvejdame
		//cout << "Vector is ";

		for (int x = 0; x < sort.size(); x++) {
			//cout << sort[x] << " ";
		//}
		//cout << endl;
		}
		//cout << "Min= " << sort[0] << endl;
		//cout << "Max= " << sort[sort.size() - 1] << endl;
		//Vuv vtori vektor prehvurlete stoynostite ot purviq, bez povtarqshti se

	}
	vector<int> two;
	int old = -1;
	for (int i = 0; i < sort.size(); i++) {
		if (old != sort[i]) two.push_back(sort[i]);
		else sort[i];
	}
	cout << "new vector: ";
	for (int i = 0; i < two.size(); i++)
		cout << two[i] << " ";
	cout << endl;
	cout << "Povtarqshti sa: " << sort.size() - two.size() << endl;
	// Premahvane na vsichki elementi:
	//1 
	while (sort.size() > 0) sort.pop_back();
	//2
	while (sort.size() > 0) sort.erase(sort.begin());
	//3
	sort.erase(sort.begin(), sort.end());
	//4
	sort.clear();
}