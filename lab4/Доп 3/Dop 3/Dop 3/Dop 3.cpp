﻿// Dop 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<iomanip>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int x,i=0;
	double a, b;
	while (i < 1000) {
	cout << "Введите числа a,b:";
	cin >> a;
	cin >> b;
		cout << "Какое действие вы хотите выполнить? (1-сумма, 2-разность, 3-деление, 4-умножение, 5-процент от числа):";
		cin >> x;

		switch (x)
		{
		case 1:
			cout << "Сумма чисел a+b=" << a + b<< endl;
			break;
		case 2:
			cout << "Разность чисел a-b=" << a - b<< endl;
			break;
		case 3:
			cout << "a/b=" << a / b<< endl;
			break;
		case 4:
			cout << "a*b=" << a * b<< endl;
			break;
		case 5:
			cout << "Процент а от числа b равен=" << (a * 100) / b<< endl;
			break;
		default:
			cout << "Неверно выбран вариант ответа"<< endl;
			break;
			i = i + 1;
		} i++; 
	}
	return 0;
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
