//
// Created by eric on 2022/12/7.
//

/*
 * 引用作为函数参数
 */

#include <iostream>
using  namespace  std;
//交换函数  -- 值传递
void swap1003(int a ,int b) {
    int temp = a;
    a = b ;
    b = temp;
}

//交换函数  -- 地址传递
void swap1003_2(int * a ,int * b) {
    int temp = *a;
    *a = *b ;
    *b = temp;
}

//交换函数  -- 引用传递
void swap1003_3(int &a ,int &b){
    int temp = a;
    a = b ;
    b = temp;
}

int main1003(){
    int a = 10;
    int b = 20;
//    swap1003(a,b);
//    swap1003_2(&a ,&b);
    swap1003_3(a ,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

