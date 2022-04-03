//
//  main.cpp
//  lab9
//
//  Created by Saveliy Bondarev on 3.01.22.
//
#include<iostream>

#include<locale>

using namespace std;

int main()

{

setlocale(LC_ALL, "rus");

const int a = 100;

int arr[a]; float n;

cout << "Введите размер массива (n < 100) ";

cin >> n;

if ((n <= 99) && (n - (int)n == 0))

{

srand((unsigned)time(NULL));

for (int i = 0; i < n; i++)

{

arr[i] = rand() % 100;

if (((i / 10 - 2 * (i % 10)) % 7 != 0) || (i == 0))

{

if (arr[i] % 2 != 0)

{

arr[i + 1] = 4;

cout << arr[i] << " " << arr[i + 1] << " ";

++i;

}

else

cout << arr[i] << " ";

}

}

}

else

{

cout << "Ваше число не соответствует условию, попробуйте еще раз";

}

}

