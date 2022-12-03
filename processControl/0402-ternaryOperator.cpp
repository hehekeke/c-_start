//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main0402(){
    int a = 1;
    int b = 2;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = "<< c << endl;

    (a > b ? a : b) = 100;
    cout << "a = "<< a << endl;
    cout << "b = "<< b << endl;

    return 0;
}
