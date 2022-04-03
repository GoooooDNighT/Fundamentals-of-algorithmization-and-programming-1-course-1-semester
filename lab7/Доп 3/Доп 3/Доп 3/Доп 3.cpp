#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, i = 1, k; double  b = 0, c = 0, s;
	cout << "Введите количество числе в последовательности : "; cin >> n;
	while (i <= n) {
		cout << "Введите числа последовательности : "; cin >> k;
		if (k % 2 == 1) {
			c = c + 1;
			
			b = b + k;


		}i++;
	} s = b / c; cout << endl << s;

}