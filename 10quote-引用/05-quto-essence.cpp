//
// Created by eric on 2022/12/7.
//

#include <iostream>

using namespace std;
/**
 * 引用的本质  --> 指针常量  引用一旦初始化后，就不可以发生改变
 */

//发 现是引用，转换为 int * const ref=&a;
void func1005( int & ref){
    ref = 100; ///ref是引用，转换为*ref=100
}
 int main1005(){
    int a = 10 ;

     //自动转换为int * const ref=&a; 指针常量是指针指向不可改，也说明为什么引用不可更改
    int &ref = a;
    ref = 20;    //内部发现ref是引用，自动帮我们转换为：* ref = 20;
     cout << "a:" << a << endl;
     cout << "ref:" << ref << endl;
     func1005(a);
    return  0;
 }