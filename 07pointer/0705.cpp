//
// Created by eric on 2022/12/5.
// 指针与函数
//
#include <iostream>
using namespace std;

void swap01(int *a , int *b ){
    int temp = *a;
    *a = *b ;
    *b= temp;
}
int main0705(){
    int a =1 ;
    int b =2 ;
    swap01(&a,& b);
    cout << "a = "<< a << endl;
    cout << "b = "<< b << endl;
    return 0 ;
}
