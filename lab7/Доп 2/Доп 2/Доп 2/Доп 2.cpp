#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, i = 1, k; float  b = 1, c = 0, s;
	cout << "Введите количество числе в последовательности : "; cin >> n;
	while (i <= n) {
		cout << "Введите числа последовательности : "; cin >> k;
		if (k > 0) {
			c = c + k;
		}
		else {
			if (k < 0) {
				b = b * k;
			}


		}i++;
	} cout << "Sum = " << c << endl << "Proizvedenie = " << b;

}