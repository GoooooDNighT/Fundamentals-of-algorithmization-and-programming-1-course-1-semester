//
//  main.cpp
//  14lab
//
//  Created by Saveliy Bondarev on 3.01.22.
//

#include <iostream>
////  14.1.1 В одномерном массиве, состоящем из n вещественных элементов, вычислить количество отрицательных элементов массива и сумму модулей элементов, расположенных после минимального по модулю элемен-та.
using namespace std;
int main()
{
    const int max = 100;
    int a[max], raz, k=0, imin=-1, min=101, summod=0;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите число элементов массива: ";
    cin >> raz;
    cout << endl;
    for (int i = 0; i < raz; i++)
    {
        a[i] = rand() % 200 - 100;
        cout << a[i] << " ";
        if (a[i] < 0) { k = k + 1; };
        if (a[i] < min) { min = a[i];
        imin = 1;
        };
    }
    for (int i = imin; i < raz; i++)
    {
        summod = summod + abs(a[i]);
    }
    cout << "Количество отрицательных: " << k << endl << "Сумма модулей элементов, стоящих после минимального: " << summod << endl;
    system("pause");
}

//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main()
//{
//    int *a = new int;
//    delete a;
//    int arr[5][5];
//    int p = 2;
//    bool u = 0;
//    short index = 0;
//
//    srand(2);
//
//    for (short i = 0; i < 5; i++)
//    {
//        for (short j = 0; j < 5; j++)
//        {
//            arr[i][j] = rand() % 9 - 1;
//            cout << arr[i][j] << "   ";
//        }
//        cout << endl;
//    }
//
//    for (short i = 0; i < 5; i++)
//    {
//        for (short j = 0; j < 5; j++)
//        {
//            if (arr[i][j] < 0)
//            {
//                u = 1;
//            }
//        }
//
//        if (!u)
//        {
//            index = i - 1;
//            break;
//        }
//        u = 0;
//    }
//    cout << index << endl;
//
//    if (index = 0)
//    {
//        cout << "nety";
//        abort();
//    }
//
//
//    for (short i = 0; i < 5; i++)
//    {
//        arr[i][index] *= -1;
//    }
//
//    for (short i = 0; i < 5; i++)
//    {
//        for (short j = 0; j < 5; j++)
//        {
//            cout << arr[i][j] << "     ";
//        }
//        cout << endl;
//    }
//}
