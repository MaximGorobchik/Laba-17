#include "����������.h"

void sort(int a[], int n)
{
	int i, j;
	int z;
	cout << endl;
	cout << "������� ����� ���������� : " << endl;
	cout << "1 - ���������" << endl;
	cout << "2 - ��������" << endl;
	cout << endl;
	cin >> z;

	if (z == 1)
	{
		cout << endl;
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	if (z == 2)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
		cout << endl;
		for (i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	else if (z == 0 || z > 2 || z < 0)
	{
		cout << "�������...";
		cout << endl;
		sort(a, n);
	}
}