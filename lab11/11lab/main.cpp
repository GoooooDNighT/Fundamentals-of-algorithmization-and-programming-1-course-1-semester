//
//  main.cpp
//  11lab
//
//  Created by Saveliy Bondarev on 3.01.22.
//

// 11 лаба второе задание
// Даны массивы A и B, состоящие из n элементов. Построить массив S, каждый элемент которого равен сумме соответствующих элементов массивов A и B.
#include<iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int n;
    cout << "Введите кол-во элементов массива: ";
    cin >> n;
    int* A = new int[n];
    int* B = new int[n];
    int* S = new int[n];
    int * pa, * pb, i;
    
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        B[i] = rand() % 100;
    }

    cout << "Массив А: ";
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Массив B: ";
    for (i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    i = 0;
    pb = B;
    cout << "Массив S: ";
    for (pa = A; pa < A + n; pa++)
    {
        S[i] = *pa + *pb;
        cout << S[i] << " ";
        pb++;
        i++;
    }

}
