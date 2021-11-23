#include "сума цифр.h"

void digital(int a[], int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 10)
		{
			sum += a[i];
		}
		if (a[i] >= 10)
		{
			sum += (a[i] / 10) + (a[i] % 10);
		}
	}
	cout << "Сума всіх цифр = " << sum << endl;
}