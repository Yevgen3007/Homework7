#include <iostream>
#include <math.h>
using namespace std;
void main();
void arr_5()
{
	const int N = 5;
	double arr[N];
	double summ_arr = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "Введите элемент " << i + 1 << " массива: "; cin >> arr[i];
	}
	double arr_min = arr[0];
	double arr_max = arr[0];
	//Вывод массива на экран
	cout << endl << "[ ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
	//
	for (int i = 0; i < N; i++)
	{
		summ_arr += arr[i];
	}
	cout << "Сумма элементов массива: " << summ_arr << endl;
	cout << "Среднее арифметическое элементов массива: " << summ_arr / N << endl;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < arr_min) arr_min = arr[i];
		else if (arr[i] > arr_max) arr_max = arr[i];
	}
	cout << "Минимальный элемент массива: " << arr_min << endl;
	cout << "Максимальный элемент массива: " << arr_max << endl;
	main();
}
void arr_10()
{
	const int N = 10;
	int arr[N] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << endl << "[ ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
	cout << endl;
	int step;
	cout << "Сколько двигаем? "; cin >> step; cout << endl;
	char side;
	cout << "Куда двигаем? ('+' - право, '-' - лево) "; cin >> side; cout << endl;
	cout << endl;
	if (side == '+')
	{
		for (int i = 0; i < N; i++)
		{
			arr[i] += step;
		}
	} // сдвиг вправо
	else if (side == '-')
	{
		for (int i = 0; i < N; i++)
		{
			arr[i] -= step;
		}
	} // сдвиг влево
	else arr_10();
	cout << endl << "[ ";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
	cout << endl;
	main();
}
void converter_bin()
{
	int num;
	cout << "Введите число для конвертации: "; cin >> num;
	int temp = num;
	int n = 0;
	while (temp != 0)
	{
		temp /= 2;
		n++;
	}
	int* bin = new int[n];
	for (int i = n - 1; i >= 0; i--)
	{
		bin[i] = num % 2;
		num /= 2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << bin[i];
	}
	cout << endl;
	main();
}
void converter_hex()
{
	const int N = 16;
	char arr_h[N] = { '0', '1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	int num;
	cout << "Введите число для конвертации: "; cin >> num;
	int temp = num;
	int n = 0;
	while (temp != 0)	
	{
		temp /= 16;
		n++;
	}
	int* hex = new int[n];
	for (int i = n - 1; i >= 0; i--)
	{
		hex[i] = arr_h[num % 16];
		num /= 16;
	}
	for (int i = 0; i < n; i++)
	{
		cout << char(hex[i]);
	}
	cout << endl;
	main();
}
void main()
{
	setlocale(LC_ALL, "");
	int key;
	cout << "Выберите задачу 1 - массив на 5 элементов, 2 - сдвиг массива на 10 элементов, 3 - BIN, 4 - HEX: "; cin >> key;; cout << endl;
	switch (key)
	{
	case 1: arr_5(); break;
	case 2: arr_10(); break;
	case 3: converter_bin(); break;
	case 4: converter_hex(); break;
	default: exit;
	}
}