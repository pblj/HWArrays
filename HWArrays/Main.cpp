#include <iostream>
using namespace std;


void main()
{

	setlocale(0, "");

	const int size = 5;
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		cout << "������� " << i << " ������� �������:"; cin >> arr[i];
	}

	//����� � ������ �������
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;;
	}

	cout << "-----------------------" << endl;

	//����� � �������� �������
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}

	//����� ��������� �������
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "�����: " << sum << endl;

	int average;
	average = sum / size;
	cout << "�������: " << average << endl;

	int max = arr[0], min = arr[0];
	for (int i = 1; i < size; i++)
	{
		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}
	cout << "������������ ��������: " << max << endl;
	cout << "����������� ��������: " << min << endl;
}