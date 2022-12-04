//
// Created by eric on 2022/12/4.
//
#include <iostream>
using  namespace std ;

// 函数的常见样式

// 1、  无参无返
// 2、  有参无返
// 3、  无参有返
// 4 、 有参有返
void test01() {
    cout << " this is test01" << endl;
}


void test02(int a ) {
    cout << " this is test02 , a = " << a << endl;
}

int test03() {
    cout << " this is test03" << endl;
    return 100;
};

int test04(int a ) {
    cout << " this is test04" << endl;
    return a;
};

int main0602(){
    test01();
    test02(100);
    int num1 =  test03();
    cout << " num1 = " << num1 << endl ;

    int num2 =  test04(2);
    cout << " num2 = " << num2 << endl ;
    return 0;
}

