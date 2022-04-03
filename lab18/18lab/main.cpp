//
//  main.cpp
//  18lab
//
//  Created by Saveliy Bondarev on 3.01.22.
//
////1. Даны три файла целых чисел одинакового размера с именами NameA, NameB и NameC. Создать новый файл с именем NameD, в который записать максимальные элементы исходных файлов с одним и тем же номером: max(A0, B0, C0), max( A1, B1, C1), max(A2, B2, C2), ...
////2. Даны три файла целых чисел одинакового размера с именами A, B и C. Создать новый файл с именем D, в котором чередовались бы элементы исходных файлов с одним и тем же номером: a0, b0, c0, a1, b1, c1, a2, b2, c2, ... .
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//
//using namespace std;
//
//int main()
//{
//int value;
//srand(time(NULL));
////-----------СОЗДАНИЕ ФАЙЛОВ---------------------------------—
////-----------------------------------------------------------—
//ofstream of;
//of.open("NameA");
//for (int i = 0; i < 40; i++)
//{
//value = rand() % 10;
//of << value << " ";
//}
//of.close();
//
//of.open("NameB");
//for (int i = 0; i < 40; i++)
//{
//value = rand() % 10;
//of << value << " ";
//}
//of.close();
//
//of.open("NameC");
//for (int i = 0; i < 40; i++)
//{
//value = rand() % 10;
//of << value << " ";
//}
//of.close();
////------------------------------------------------—
////-------Считывание чисел из файлов в массивы-----—
//int arrA[40];
//int arrB[40];
//int arrC[40];
//
//ifstream in;
//in.open("NameA");
//
//int i = 0;
//while (i != 40)
//{
//in >> value;
//arrA[i] = value;
//i++;
//}
//in.close();
//
//in.open("NameB");
//i = 0;
//while (i != 40)
//{
//in >> value;
//arrB[i] = value;
//i++;
//}
//in.close();
//
//in.open("NameC");
//i = 0;
//while (i != 40)
//{
//in >> value;
//arrC[i] = value;
//i++;
//}
//in.close();
////---------------------------------------------------—
////------Записывание чисел в конечный файл------------—
//of.open("NameD");
//for (int i = 0; i < 40; i++) {
//if ((arrA[i] > arrB[i]) && (arrA[i] > arrC[i]))
//{
//of << arrA[i] << " ";
//}
//if ((arrB[i] > arrA[i]) && (arrB[i] > arrC[i]))
//{
//of << arrB[i] << " ";
//}
//if ((arrC[i] > arrB[i]) && (arrC[i] > arrA[i]))
//{
//of << arrC[i] << " ";
//}
//}
//
//
//
//
//return 0;
//}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int value;
srand(time(NULL));
//-----------СОЗДАНИЕ ФАЙЛОВ---------------------------------—
//-----------------------------------------------------------—
ofstream of;
of.open("NameA");
for (int i = 0; i < 40; i++)
{
value = rand() % 10;
of << value << " ";
}
of.close();

of.open("NameB");
for (int i = 0; i < 40; i++)
{
value = rand() % 10;
of << value << " ";
}
of.close();

of.open("NameC");
for (int i = 0; i < 40; i++)
{
value = rand() % 10;
of << value << " ";
}
of.close();
//------------------------------------------------—
//-------Считывание чисел из файлов в массивы-----—
int arrA[40];
int arrB[40];
int arrC[40];

ifstream in;
in.open("NameA");

int i = 0;
while (i != 40)
{
in >> value;
arrA[i] = value;
i++;
}
in.close();

in.open("NameB");
i = 0;
while (i != 40)
{
in >> value;
arrB[i] = value;
i++;
}
in.close();

in.open("NameC");
i = 0;
while (i != 40)
{
in >> value;
arrC[i] = value;
i++;
}
in.close();
//---------------------------------------------------—
//------Записывание чисел в конечный файл------------—
of.open("NameD");
for (int i = 0; i < 40; i++)
of << arrA[i] << " " << arrB[i] << " " << arrC[i] << " ";




return 0;
}
