#include "ввід даних.h"
void input(int a[], int n)
{
	int u;
	cout << "Введіть [1], якщо хочете заповнити масив рандомом : " << endl;
	cout << "Введіть [2], якщо хочете заповнити масив : " << endl;
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
			cout << "Введіть " << n << " числа :" << endl;
		}
		else {
			cout << "Введіть " << n << " чисел :" << endl;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	else if (u == 0 || u > 2)
	{
		cout << "Помилка..." << endl;
		cout << endl;
		input(a, n);
	}
}