//
// Created by eric on 2022/12/5.
//
#include <iostream>
using namespace std;
// const 修饰指针---常量指针
// const 修饰常量---指针常量
// const 修饰常量 + 指针


/**
 * 常量指针 特点：指针的指向可以修改，但是指针指向的值不可以改
 * 指针常量 特点：指针的指向不可以修改，但是指针指向的值可以改
 * const 修饰常量 + 指针 : 指针的指向 、指针的值 都不可以修改

 */
int main0703(){
    int a = 10;
    int b = 10;
    const int * p = &a;
    // 指针的指向可以修改，但是指针指向的值不可以改
    //  *p = 20 ; 错误
    p = &b; // 正确

    // 指针的指向不可以修改，但是指针指向的值可以改
    int * const p2 = &a;
    *p2 = 100; // 正确
    // p2 = &a ; 错误的




    return  0;
}
