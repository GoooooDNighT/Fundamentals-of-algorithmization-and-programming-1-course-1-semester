﻿// Dop 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int k, o, t, x, y;
	for (k = 1; k < 10; k++) {

		for (o = 1; o < 10; o++) {
			for (t = 1; t < 10; t++) {
				x = (k * 100 + o * 10 + t);
				y = (t * 100 + o * 10 + k);



				if
					(y = 2 * x) {

					cout << "k=" << k << endl;
					cout << "o=" << o << endl;
					cout << "t=" << t << endl;
				}

				else
					cout << "нет таких чисел";
			}
		}
	}
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
