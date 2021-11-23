#include "числа навпаки.h"

void reverse(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 10)
		{
			a[i] = a[i];
		}
		if (a[i] >= 10)
		{
			a[i] = ((a[i] % 10) * 10) + (a[i] / 10);
		}
	}
}