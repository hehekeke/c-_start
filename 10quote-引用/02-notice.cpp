//
// Created by eric on 2022/12/7.
//
#include <iostream>
using  namespace  std;
// 引用的使用注意事项

int main1002(){
    int a = 10 ;
    // 1、引用的时候必须初始化

    // int &b ;  这个是错误的  需要初始化
    int &b  =  a;

    // 2、初始化 之后就不能修改了

    int c = 20;
     b = c;  // 赋值操作 ，而不是更改引用 引用不能进行更改
     cout <<" a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c  << endl;


    return 0;
}