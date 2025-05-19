#include <iostream>
#include <string>

using namespace std;
#define HEX

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

	//сдвиг
	int shifts;
	cout << "Введите число на которое нужно сдвинуть массив: "; cin >> shifts;

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
	//перевод в двоичную
	unsigned int number;
	cout << "Введите число для конвертации в двоичную ситстему счисления: "; cin >> number;

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
		cout << "Слишком большое число!";
		return;
	}

	for (int j = i; j >= 0; j--)
	{
		cout << binary[j] << " ";
	}

#endif // BIN

#ifdef HEX

	//перевод в шестнадцатеричную
	unsigned int number;
	cout << "Введите число для конвертации в шестнадцатеричную ситстему счисления: "; cin >> number;

	const char hex[16]{ '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	int digitArr[100];
	int i = 0;
	while (number > 0) {

		digitArr[i] = number % 16;
		number /= 16;
		i++;
	}

	for (int j = i-1; j >= 0; j--)
	{
		cout << hex[digitArr[j]];
	}

#endif // HEX

	

}
