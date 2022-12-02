//
// Created by eric on 2022/12/2.
//
#include <iostream>
using  namespace std ;
int main(){
    // 逻辑运算符  ！   && ||
    cout << "逻辑运算符 : ！ " << endl;
    int a = 10 ;

    cout << (!a) <<  endl;
    cout << (!!a) << endl;

    cout << "逻辑运算符 : ！ " << endl;
    int b = 10 ;
    cout << (a && b ) << endl;
    cout << (a && 0 ) << endl;
    cout << "逻辑运算符 : && " << endl;
    cout << "逻辑运算符 : || " << endl;

    return 0;
}