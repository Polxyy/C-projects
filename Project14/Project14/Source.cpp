#include <iostream>
#include <string>
#include <vector>

using namespace std;

class taxPayer {
public:
	taxPayer() {};
	~taxPayer() {};
	virtual void tax_Print() = 0;
	virtual double tax_Calc() = 0;

protected:
	string ID;
};

class taxDod : public taxPayer
{
public:
	taxDod(string ime, double suma) {
		ID = ime; dohod = suma;
	};
	~taxDod() {};
	virtual void tax_Print() {
		cout << "DOD: Name:" << ID << ", Sum:" << dohod;
		cout << ", TAX:"<<tax_Calc() << endl;
	};
	virtual double tax_Calc() {
		return dohod * 0.1;
	};
private:
	double dohod;
};

class taxEstate : public taxPayer
{
public:
	taxEstate(string adres, double cena) {
		ID = adres, dan_ocenka = cena;
	};
	~taxEstate() {};
	virtual void tax_Print() {
		cout << "Estate: Address:" << ID << ", Value:" << dan_ocenka;
		cout << ",TAX:" << tax_Calc() << endl;
	};
	virtual double tax_Calc() {
		return dan_ocenka*0.001;
	};


private:
	double dan_ocenka;
};

class tax_Car : public taxPayer
{
public:
	tax_Car(string reg, int moshnost, int vazrast) {
		ID = reg; power = moshnost; age = vazrast;
	};
	~tax_Car() {};
	virtual void tax_Print() {
		cout << "MPS: Reg:" << ID << ", Power" << power;
		cout << ", Age:" << age << ", Tax:" << tax_Calc() << endl;
	};
	virtual double tax_Calc() {
		double dan = 200;
		if (power > 101) {
			dan = dan * 1.5;
		}
		dan = dan * (1 + age / 100.0);
		return dan;
	};

private:
	int power, age;
};

class queryTax
{
public:
	queryTax() {};
	~queryTax() {};
	void Add(taxPayer* p) {
		opashka.push_back(p);
	};
	void List() {
		cout << "Query:\n";
		if (opashka.empty())
			cout << "Empty!\n";
		else
			for (int i = 0; i < opashka.size(); i++)
				opashka[i]->tax_Print();

	};
	double Process() {
		if (opashka.empty()) return 0;
		double d = opashka[0]->tax_Calc();
		opashka.erase(opashka.begin());
		return d;
	};

private:
	vector<taxPayer *> opashka;
};



int main() {
	queryTax q;
	string izb = "9";
	while (izb != "0") {
		cout << "MENU\n==========================\n";
		cout << "1.DOD\n2.Sgradi\n3.MPS\n4.Spisak\n5.Obraboti\n";
		cout << "0.Izhod\========================\nIZBERI:";
		getline(cin, izb);
		if (izb == "4") {
			q.List();
		}
		if (izb == "5") {
			cout << "Tax payed:" << q.Process() << endl;
		}
		if (izb == "1") {
			string ime; double suma;
			cout << "Name: "; getline(cin, ime);
			cout << "Sum: "; cin >> suma;
			taxDod* ptr;
			ptr = new taxDod(ime, suma);
			q.Add(ptr);
		}
		if (izb == "2") {
			string adr; double suma;
			cout << "Adress: "; getline(cin, adr);
			cout << "Sum: "; cin >> suma;
			q.Add(new taxEstate(adr,suma));
		}
		if (izb == "3") {
			string reg; int power; int age;
			cout << "Reg: "; getline(cin, reg);
			cout << "Power: "; cin >> power;
			cout << "Age: "; cin >> age;
			q.Add(new tax_Car(reg, power,age));
		}

		cin.ignore(10, '\n');

	}
}
