﻿// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

#include <locale>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	unsigned int a;
	int i;
	char tmp[33];


	const unsigned int maskR = 3681400539;
	const unsigned int maskL = 1840700269;
	const unsigned int mask2 = 1 << 31;

	cout << "Введите целое число: ";
	cin >> a;

	_itoa_s(a, tmp, 2);
	cout << "Число a в двочиной системе: " << tmp << endl;

	a &= maskR;
	cout << "результат: " << endl;
	for (i = 1; i <= 32; i++)
	{
		putchar(mask2 & a ? '1' : '0');
		a <<= 1;
		if (i % 8 == 0) putchar(' ');
	}

	cout << endl;

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
