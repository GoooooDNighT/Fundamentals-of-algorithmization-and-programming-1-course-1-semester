//
//  main.cpp
//  13lab
//
//  Created by Saveliy Bondarev on 3.01.22.
//

// 13 лаба второе задание
//Для заданной целочисленной матрицы A(N, M) определить, является ли сумма её элементов чётным числом.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
   const int N = 6;
    const int M = 6;
    int A[N][M];
    int  sum;
    cout << "Введите матрицу:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = rand() % 200 - 100;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0 ; i < N ; i ++ )
    for (int j = 0 ; j < M ; j ++ )
        sum += A [N][M];
    if (sum % 2)
     cout << "-"; // не четно
    else
        cout << "+";// четно

}
