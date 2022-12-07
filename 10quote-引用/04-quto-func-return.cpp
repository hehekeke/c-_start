//
// Created by eric on 2022/12/7.
//
/*
 * 引用作为函数的返回值
 */

// 1、不要作为返回局部变量的引用
int& test1004(){
    int a = 10 ;
    return a;
}
int & test1004_1(){
    static int a = 10;  // 静态变量 ，放到数据的全局区
    return a;
}
// 2、

#include <iostream>
using  namespace  std;
int main1004(){
    int &ref =  test1004 ();
    cout << "ref = " << ref << endl; // 第一次正确 ，编译器做了保留
    cout << "ref = " << ref << endl; // 第二次错误 ，编译器已经把保留值 去掉了

     int &ref2 =  test1004_1 ();
    cout << "ref2 = " << ref2 << endl; // 第一次正确 ，编译器做了保留

    test1004_1 () = 100;  // 如果函数的返回值是引用，那么函数调用可以作为左值

    cout << "ref2 = " << ref2 << endl; // 第一次正确 ，编译器做了保留
    return  0;
}