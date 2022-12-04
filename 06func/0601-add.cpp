//
// Created by eric on 2022/12/4.
//
#include <iostream>
#include "functionFileCompilation/swap.h"
using  namespace std ;

int add(int num1 ,int num2) {
    return num1 + num2 ;
}

int main0601(){
    int a = 10;
    int b = 10;
    int c  = add(a,b);
    cout << "c = " << c << endl;


    a = 100 ;
    c  = add(a,b);
    cout << "c = " << c << endl;

    cout << "交换前======" << endl;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    swap(a,b);

    cout << "交换后======" << endl;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    return 0;
}



