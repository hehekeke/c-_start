//
// Created by eric on 2022/12/7.
//
#include <iostream>
using  namespace  std;

int main1001(){
    // 引用的基本语法
    //  &别名 = 原名;

    int a = 10 ;
    int &b = a ;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

