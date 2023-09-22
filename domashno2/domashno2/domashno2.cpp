#include <iostream>
#include <string>

using namespace std;

int main()
{
	string izr, duma;
	string mask = ".,!? ";
	string mask2 = "0123456789";
	size_t asd = -1;
	size_t nachalo, krai;
	cout << "Enter text: " << endl;
	getline(cin, izr);
	nachalo = izr.find_first_not_of(mask);
	while (string::npos != nachalo) {
		krai = izr.find_first_of(mask, nachalo);
		duma = izr.substr(nachalo, krai - nachalo + 1);
		if (duma.find_first_of(mask2)) {
			cout << duma << " ";
		}
		else if (duma.find_first_not_of(mask2)) {
			cout << "*" << " ";
		}
		nachalo = izr.find_first_not_of(mask, krai);
	}

}