//
//  main.cpp
//  16lab
//
//  Created by Saveliy Bondarev on 3.01.22.
//
//1. Дана целочисленная прямоугольная матрица. Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент.

#include <iostream>
#include <ctime>
#include <time.h> // Для srand
using namespace std;
const int N = 3,M = 5; // Размер матрицы
 
void out(int mas[N][M]) // Более менее красивый вывод на экран массива содержащего и положительные и отрицательные элементы
{
    for (int i(0); i<N; i++)
    {
        for (int j(0); j<M; j++)
        {
            if(mas[i][j]>=0)cout << " " << mas[i][j]<< "  ";
            else cout << mas[i][j] << "  ";
        }
        cout << endl;
    }
}
 
void random(int mas[N][M]) // Заполнение массива ранд числами в диапазоне -5 до 5
{
    for (int i(0); i<N; i++)
        for (int j(0); j<M; j++)
            mas[i][j] = rand()%10+(-5);
}
 
void one(int mas[N][M]) // Вычисляем порядковый номер первого столбца соделжащего нулевой элемент
{
    int result(M+1);
    for (int i(0); i < N; i++)
    {
         for (int j(0); j < M; j++)
         {
             if (mas[i][j] == 0)
                 if(j<result)result=j;
         }
    }
    if(result<M+1)cout << "Номер первого столбца содержащего нулевой элемент: " << result+1 << endl;
    else cout << "Нулевой элемент в массиве не найден\n";
}
 
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int mas[N][M];
 
    random(mas);
    out(mas);
    one(mas);
 
    system("pause>NUL");
    return 0;
}
