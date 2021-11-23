#include "2 масива.h"

void arrays(int a[], int n)
{
	int A[20], B[20];
	cout << "Масив А(парні) : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			A[i] = a[i];
			cout << A[i] << " ";
		}
	}
	cout << endl;
	cout << "Масив B(не парні) : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0) {
			B[i] = a[i];
			cout << B[i] << " ";
		}
	}
}