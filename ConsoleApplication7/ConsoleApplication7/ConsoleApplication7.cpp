

#include <iostream>
#include <stdlib.h>
using namespace std;

int sort(int arr[]) {
	int temp1;
	for (int i = 0; i < 1000; i++)
	{
		for (int k = i + 1; k < 1000; k++)
		{
			if (arr[i] > arr[k])
			{
				temp1 = arr[i];
				arr[i] = arr[k];
				arr[k] = temp1;
			}
		}
	}
	return 0;
}

int main()
{
	int a[1000];
	for (int i = 0; i < 1000; i++) {
		a[i] = rand() % 1000000 + 1;
	}
	sort(a);
	for (int i = 0; i < 1000; i++)
	{
		cout << a[i] << endl;
	}
}


