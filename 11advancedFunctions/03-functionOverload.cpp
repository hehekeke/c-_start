//
// Created by eric on 2022/12/7.
//
#include <iostream>
using  namespace  std;

// 函数重载
// 可以让函数名相同，提高复用性

// 需要满足的条件
// 1、在同一个作用域下面
// 2、函数名相同
// 3、函数参数类型不同，后者个数不同，或者顺序不同
void func1103_1(){
    cout << " func 的调用" << endl;
}

void func1103_1(int a ){
    cout << " func (int a ) 的调用" << endl;
}
void func1103_1(double a ){
    cout << " func (double a ) 的调用" << endl;
}

void func1103_1(double a ,int b  ){
    cout << " func (double a ,int b ) 的调用" << endl;
}

void func1103_3(){
    cout << " func 的调用" << endl;
}
int main1103(){
    func1103_1();
    func1103_1(1);
    func1103_1(3.1415);
    return 0 ;
}
