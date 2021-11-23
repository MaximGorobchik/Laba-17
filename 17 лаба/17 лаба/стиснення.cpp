#include "стиснення.h"

void compression(int a[], int n)
{
	int i;
	cout << endl;
	cout << "Стиснення : ";
	for (i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1] && i + 1 < n)
		{
			a[i] += a[i + 1];
			for (int j = i+1; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
