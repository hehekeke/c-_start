//
// Created by eric on 2022/12/1.
//
#include <iostream>
using  namespace  std ;
int main0205() {
    char a = 'a' ;
    cout << a << endl ;


    cout << "char a 的长度是 :" << sizeof(a)<< endl ;

    // 对应的ASCII编码
    cout << int(a) << endl;

    cout << (int)a << endl;
    return 0;
}