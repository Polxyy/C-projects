#include <iostream>
using namespace std;

int main() {
	int a[10]; int b[10];
	int temp1, temp2;
	int k;
	int proba = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number in array1: " << endl;
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number in array2: " << endl;
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			if (a[i] > a[k])
			{
				temp1 = a[i];
				a[i] = a[k];
				a[k] = temp1;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			if (b[i] > b[k])
			{
				temp2 = b[i];
				b[i] = b[k];
				b[k] = temp2;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != b[i])
				proba = 1000;
	}
	if (proba == 0)
		cout << "Ednakvi" << endl;
	else
		cout << "Razlichni" << endl;
}
	