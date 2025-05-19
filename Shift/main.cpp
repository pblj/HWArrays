#include <iostream>
#include <string>

using namespace std;

void main()
{

	setlocale(0, "");

	const int size = 10;
	int arr[size]{0,1,2,3,4,5,6,7,8,9};

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";;
	}

	cout << endl << "--------------------------------" << endl;

	//�����
	int shifts;
	cout << "������� ����� �� ������� ����� �������� ������: "; cin >> shifts;

	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < size; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[size - 1] = buffer;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";;
	}

	cout << endl << "--------------------------------" << endl;

#ifdef BIN
	//������� � ��������
	unsigned int number;
	cout << "������� ����� ��� ����������� � �������� �������� ���������: "; cin >> number;

	int binary[100];
	int i = 0;
	for(i; i < 100; i++)
	{
		binary[i] = (number % 2);
		number /= 2;
		if (number == 0)
		{
			break;
		}
	}
	
	if (number > 0)
	{
		cout << "������� ������� �����!";
		return;
	}

	for (int j = i; j >= 0; j--)
	{
		cout << binary[j] << " ";
	}

#endif // BIN

	//������� � �����������������
	unsigned int number;
	cout << "������� ����� ��� ����������� � ����������������� �������� ���������: "; cin >> number;

	int hex[100];
	int i = 0;
	for (i; i < 100; i++)
	{
		hex[i] = number - (number % 16);
		number /= 16;
		if (number == 0)
		{
			break;
		}
	}

}
