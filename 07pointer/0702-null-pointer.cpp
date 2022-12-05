//
// Created by eric on 2022/12/5.
//
#include <iostream>
using namespace std;
int main0702(){
    // 1、空指针用于给指针变量进行初始化
    int * p = NULL;

    // 2、空指针不可以进行访问   0~255 的内存编号是系统占用的，因此不能访问
    cout <<  *p << endl ;

    // 野指针：指针变量指向非法的内存空间
    int * a = (int *) 0x11100;
    cout << *a << endl ;
    return 0;
}
