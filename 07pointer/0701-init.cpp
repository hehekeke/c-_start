//
// Created by eric on 2022/12/4.
//
#include <iostream>
using namespace std;
int main(){
    int a = 1 ;

    int * p ;
    p = &a ;
    cout << "a变量的地址 :" << &a << endl;
    cout << "指针p的地址 :" << p << endl;

    // *p 解引用的操作
    * p = 1000;
    cout << "a = :" << a << endl;
    cout << "*p = :" << *p << endl;

    // 指针所占内存空间
    cout << "size of (int *) = " << sizeof(int *) << endl;
    cout << "size of (float *) = " << sizeof(float *) << endl;
    cout << "size of (double *) = " << sizeof(double *) << endl;
    cout << "size of (char  *) = " << sizeof(char *) << endl;


}
