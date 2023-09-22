#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	double chislo;
	cout << "Vuvedi chislo" << endl;
	cin >> chislo;
	//1
	fstream fp;
	//2
	fp.open("d:\\data\\stoki.txt",ios::in);
	if (!fp.is_open()) {
		cout << "File not found!\n";
		return -1;
	}
	fstream f2;
	f2.open("d:\\data\\otchet.txt", ios::out);
	f2 << "Продажби на стоки \n";
	f2 << "===============================================================\n";
	f2 << "Produkt" << "\t\t\t" << "Obshta Suma" "\t" << "Suma Bez DDS" << "\t" << "DDS" << "\t" << endl;

	//3
	string ime; double suma; double sum = 0; double sumdds = 0; double sumbdds = 0;
	double dds;
	double BezDds;
	
	while (!fp.eof()) {
		getline(fp, ime,';');
		fp >> suma;

		size_t nov = ime.find("\n");
		if (nov != string::npos) ime.erase(nov, 1);
		cout << ime << "\t\t" << suma << endl;
		if (suma > chislo) {		sum += suma;
		BezDds = suma * 0.8;
		dds = suma * 0.2;
		sumdds += dds;
		sumbdds += BezDds;
			f2 << ime << "\t\t" << suma << "\t\t" << BezDds << "\t\t" << dds << endl;
		}
	}
	cout << "Suma: " << sum;
	f2 << "===============================================================\n";
	f2 << "Obshto: " << "\t\t" << sum << "\t\t" << sumbdds << "\t\t" << sumdds << endl;

	//4
	fp.close(); f2.close();
}