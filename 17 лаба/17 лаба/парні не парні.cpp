#include "���� �� ����.h"

void evenanddd(int a[], int n)
{
	int k = 0; //����
	int p = 0; //�� ����
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
		cout << "������ �����!" << endl;
	}
	else if (k==p){
		cout << endl;
		cout << "������ � �������� ��������!" << endl;
	}
	else
	{
		cout << endl;
		cout << "�������� �����!" << endl;
	}
}