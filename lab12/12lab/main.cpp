//
//  main.cpp
//  12lab
//
//  Created by Saveliy Bondarev on 3.01.22.
//

//1
//#include <stdio.h>
//#include <memory.h>
//#include <string.h>
//#include<iostream>
//#include<locale>
//
//char*  insert(char* str, const char* spos, int pos) {
//    int len = strlen(str);
//    int cnt = strlen(spos);
//    memmove(str + pos + cnt, str + pos, len + cnt);
//    strncpy(str + pos, spos, cnt);
//    return str;
//}
//
//
//int main(void)
//{
//   char str[32];
//   strcpy(str, "subaru wrx.");
//
//   puts( insert(str, "-impreza", 6) );
//
//   getchar();
//   return 0;
//}
//2
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for(int step = 0; step < str.length(); step++)
        if(str[step] == 'b')
            str[step] = '\0';
    cout << str;
    return 0;
}
