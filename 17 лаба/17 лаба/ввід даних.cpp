#include "��� �����.h"
void input(int a[], int n)
{
	int u;
	cout << "������ [1], ���� ������ ��������� ����� �������� : " << endl;
	cout << "������ [2], ���� ������ ��������� ����� : " << endl;
	cin >> u;
	if (u == 1)
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 30;
		}
	}
	if (u == 2)
	{
		if (n == 3 || n == 2 || n == 4)
		{
			cout << "������ " << n << " ����� :" << endl;
		}
		else {
			cout << "������ " << n << " ����� :" << endl;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	else if (u == 0 || u > 2)
	{
		cout << "�������..." << endl;
		cout << endl;
		input(a, n);
	}
}