#include "парні не парні.h"

void evenanddd(int a[], int n)
{
	int k = 0; //парні
	int p = 0; //не парні
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			k++;
		}
		else {
			p++;
		}
	}
	if (k > p)
	{
		cout << endl;
		cout << "Парних більше!" << endl;
	}
	else if (k==p){
		cout << endl;
		cout << "Парних і непарних однаково!" << endl;
	}
	else
	{
		cout << endl;
		cout << "Непарних більше!" << endl;
	}
}