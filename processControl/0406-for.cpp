//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main0406(){

    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    for (int i = 1; i <= 100; ++i) {
        if (i %7 == 0 || i / 10 == 7 || i%10 == 7) {
            cout << "敲桌子" << endl;
        }else{
            cout << i << endl;
        }
    }
    // 嵌套循环
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << "*" ;
        }
        cout << endl;
    }


    // 乘法口诀表
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << "*" << j << "= " << i*j << "  " ;
        }
        cout <<  endl;
    }
    return  0;
}
