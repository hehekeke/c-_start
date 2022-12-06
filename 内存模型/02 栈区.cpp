//
// Created by eric on 2022/12/6.
//
#include <iostream>
using namespace std;
// 栈区数据注意事项---- 不要返回局部变量的地址
// 栈区的数据有编译器管理开辟和释放

int* func() {
    int a = 2 ;
    return  &a ;
}

int main03(){
    int *p =  func();
    cout << *p << endl; // 第一次可以正确打印，是因为编译器做了保留
    cout << *p << endl; // 第二次这个数据就不在保留了
    return 0;
}
