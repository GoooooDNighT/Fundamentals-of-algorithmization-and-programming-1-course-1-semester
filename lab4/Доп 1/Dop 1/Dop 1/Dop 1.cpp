﻿// Dop 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, p, r, q, r1;
	using namespace std;
	cout<< "Введите радиус шара: "; cin>>r1;
	cout<< "введите значение 1-ой диагонали: "; cin>> q;
	cout<< "введите значение 2-ой диагонали: "; cin>> p;
	a = sqrt(pow(p / 2, 2) + pow(q / 2, 2));
	r = q * p / (4 * a);
	if (r1 < r) {
		cout<< "Шар радиуса "; cout<< r1; cout<< " пройдет через ромбообразное отверстие";
	}
	else {
		cout<< "Шар радиуса "; cout<< r1; cout<< " не пройдет через ромбообразное отверстие";
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
