#include "2 ������.h"

void arrays(int a[], int n)
{
	int A[20], B[20];
	cout << "����� �(����) : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			A[i] = a[i];
			cout << A[i] << " ";
		}
	}
	cout << endl;
	cout << "����� B(�� ����) : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0) {
			B[i] = a[i];
			cout << B[i] << " ";
		}
	}
}