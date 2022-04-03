#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, a, b = 0, c, i = 1, k;
	cout << "Введите количество чисел в последовательности : "; cin >> n;
	while (i <= n) {
		cout << "Введите числа последовательности : "; cin >> k;
		if (k % 2 == 0) {
			/*cout << k <<"   " ;*/
			b = b + k;


		}i++;
	}cout << endl << "Cумма равна " << b;

}