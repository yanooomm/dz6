/* TheMassiv12 В целочисленном массиве X(N) найти max1 - максимальный элемент
среди элементов массива с четными значениями и max2 - максимальный элемент среди
элементов с нечетными значениями*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, max1, max2, NetChet=0, NetNeChet=0;
	cin >> n;
	int *a = new int [n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 == 0)
		{
			max1 = a[j];
			NetChet += 1;
		}
		if (a[j] % 2 != 0)
		{
			max2 = a[j];
			NetNeChet += 1;
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 == 0 && a[j]>max1)
			max1 = a[j];
		if
			(a[j] % 2 != 0 && a[j]>max2)
			max2 = a[j];
	}
	if (NetChet == 0)
		cout << "Четных чисел нет" << endl << "Максимальное нечетное число: " << max2;
	else
	{
		if (NetNeChet == 0)
			cout << "Максимальное четное число: " << max1 << endl << "Нечетных чисел нет";
		if (NetChet == 0 && NetNeChet == 0)
			cout << "Четных чиел нет" << endl << "Нечетных чисел нет";
		if (NetChet != 0 && NetNeChet != 0)
			cout << "Максимальное четное число: " << max1 << endl << "Максимальное нечетное число: " << max2;
	}
	delete[] a;
}

/*
4
1
2
3
4
Максимальное четное число: 4
Максимальное нечетное число: 3
*/

/*
3
1
3
5
Четных чисел нет
Максимальное нечетное число: 5
*/

/*
3
2
4
6
Максимальное четное число: 6
Нечетных чисел нет
*/