#include <iostream>
#include <fstream>
#include <string> 
#include <stdlib.h>
#include <vector>


//ot fayl da se prochetat avtomobilite
//da se slojat vuv vektor
//bez globalni promenlivi

using namespace std;
						
string ImeFile; string ModelFile; int DuljimaSumaFile; int vreme;   

class Klient { 
public:
	Klient() {};
	~Klient() {};
	string ime;
	string KolaModel;
	int nalichnost;

private:
	string NachinPlashtane;

}; 

//class Naem :public Klient 
//{//klas naem unasledqva klas klient
//public:
//	int dni = 0, taksa = 0;
//	string kma;
//
//	void izbor() {
//		cout << "Vuvedete ime: ";
//		cin >> ime;		cout << endl;
//		do {
//			cout << "Molq izberete kola" << endl; //Izbori ot koli
//			cout << "Vuvedete 'A' za Mercedes 2016." << endl;
//			cout << "Vuvedete 'B' za Volkswagen 2015." << endl;
//			cout << "Vuvedte 'C' za Nissan 2017." << endl << endl;
//			cout << "Izberete edna ot goreposochenite koli: ";
//			cin >> KolaModel;			cout << endl;
//			if (KolaModel == "A"){
//				if (a == 0) { cout << "Nqma nalichnost!\n"; return; }
//				taksa = 96;
//				kma = "Mercedes 2016";
//				cout << "Izbrahte Mercedes 2016" << endl;
//				a--;
//			}
//			if (KolaModel == "B"){
//				if (b == 0) { cout << "Nqma nalichnost!\n";  return; }
//				taksa = 80;
//				kma = "Volkswagen 2015";
//				nalB--;
//				cout << "Izbrahte Volkswagen 2015" << endl;
//				b--;
//			}
//			if (KolaModel == "C")
//			{
//				if (c == 0) { cout << "Nqma nalichnost!\n"; return; }
//				taksa = 75;
//				kma = "Nissan 2017";
//				c--;
//				cout << "Izbrahte Nissan  2017" << endl;
//			}
//			if (KolaModel != "A" && KolaModel != "B" && KolaModel != "C") {
//				cout << "Nevalidnen izbor. Molq opitayte otnovo!" << endl;
//			}
//		} while (KolaModel != "A" && KolaModel != "B" && KolaModel != "C");
//		cout << "=================================" << endl;
//		cout << "Molq zapishete za kolko dena se dava kolata: " << endl;
//		ImeFile = ime;
//		ModelFile = kma;
//		cin >> dni;
//		cout << endl;
//		cout << "Uspeshno izpulnenie!\n\n";
//		vreme = dni;
//		DuljimaSumaFile = taksa * dni;
//	}
//
//	void printFaktura() {
//		if (dni != 0) {
//			cout << "==========Faktura=========\n";
//			cout << "Ime na Klient: " << ime << '\n';
//			cout << "Model na kola: " << kma << '\n';
//			cout << "Dni: " << dni << '\n';
//			cout << "Taksa za den: " << taksa << '\n';
//			cout << "Taksa za celiq period: " << taksa * dni << '\n';
//			cout << "==========================\n";
//		}
//		else if (dni == 0) {
//			cout << "Nqma napraveni zaqvki!\n";
//		}
//
//	}
//};







class Koli
{
public:
	string marka;
	int nal;
	int godina;
	int cenaNaem;
	Koli(string Marka, int Godina, int cena, int nalichnost) {
		//konstruktor
		marka = Marka;
		godina = Godina;
		cenaNaem = cena;
		nal = nalichnost;
	};
	void print() {
		cout << " marka: " << marka <<" << godina" << godina << " cena: " << cenaNaem << "naichnost: "<<nal<< "\n";
	}


private:

};



class dobaviKoli
{

public:


	void Add(Koli* p) {
		list.push_back(p);
	}
	void Print() {
		for (int c = 0; c < list.size(); c++) {
			list[c]->print();
		}
	}

private:
	vector<Koli*> list;

};



int main() {

	dobaviKoli k;
	string marka; int godina; int cena; int nalichnost;
	fstream f1;
	fstream koli;
	Klient* ptr;
	koli.open("C:\\Users\\ROG STRIX\\Desktop\\koli.txt", ios::in);
	if (!koli.is_open()) {
		cout << "not open";
	}
	while (!koli.eof()) {
		getline(koli, marka, '\t');
		koli >> godina;
		koli >> cena;
		koli >> nalichnost;
		k.Add(new Koli(marka,godina,cena,nalichnost));

	}
	f1.open("C:\\Users\\ROG STRIX\\Desktop\\klienti.txt", ios::out);
	//otvarqne na fayla za zapisvane
	//Naem obj2;

	string menu = "9"; // promenliva za upravlenie na menyuto
	while (menu != "0") { //cikul za navigirane v menyuto koyto spira kato se vuvede 0
		cout << "==========-Menu-==========\n";
		cout << "\t1.Informaciq\n\t2.Vzemane\n\t3.Faktura\n\t4.Zapisvane\n";
		cout << "=========-0.Izhod-========\n";
		cout << "Izbor:";
		cin >> menu;
		system("CLS");
		if (menu == "1") {
			k.Print();
		}
		if (menu == "2") {
			//obj2.izbor();
		}
		if (menu == "3") {
			//obj2.printFaktura();
		}
		if (menu == "4") {
			f1 << "ImeKlient: " << ImeFile << "\tModel na kola: " << ModelFile<< "\tDuljima suma: " << DuljimaSumaFile << "\tVreme pod naem: " << vreme << "\n";
		}


	}
	cin.ignore(10, '\n');
	f1.close();
}



