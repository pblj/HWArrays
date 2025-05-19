#include <iostream>
using namespace std;


void main()
{

	setlocale(0, "");

	const int size = 5;
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i << " элемент массива:"; cin >> arr[i];
	}

	//вывод в прямом порядке
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;;
	}

	cout << "-----------------------" << endl;

	//вывод в обратном порядке
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}

	//сумма элементов массива
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма: " << sum << endl;

	int average;
	average = sum / size;
	cout << "Среднее: " << average << endl;

	int max = arr[0], min = arr[0];
	for (int i = 1; i < size; i++)
	{
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}
	cout << "Максимальное значение: " << max << endl;
	cout << "Минимальное значение: " << min << endl;
}