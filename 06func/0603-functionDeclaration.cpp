//
// Created by eric on 2022/12/4.
//
#include <iostream>
using  namespace std ;

// 函数的声明 ，提前告诉编译器 ，存在这个func ， func可以放到 main 的后面了
// 函数的声明 可以声明多次，但是具体的实现 只能一次
int max(int a, int b );
int max(int a ,int b) {
    return  a > b ? a : b ;
}

int main() {
    int num2 = max(1,2) ;
    cout << "num2 = " << num2 <<  endl ;
    return  0;
}


