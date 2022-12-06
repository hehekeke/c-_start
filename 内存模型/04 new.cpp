//
// Created by eric on 2022/12/6.
//
#include <iostream>

using namespace std;

// 1、 new的基本语法
int * func02(){
    int * p = new int(10);
    return p ;
}
void  test04(){
    int *p = func02();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
     // 堆区的数据  有程序员管理开辟，程序员管理释放
     // 可以使用delete
     delete p;
    cout << *p << "  222" << endl;
}

void test0402(){
    int * arr = new int []{0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }

    // 释放数组 的时候 ，需要添加一个空括号 才行
    delete [] arr;

    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }
}


// 2、 在堆区利用new开辟新的数组
int main(){
    test04();
    test0402();
    return 0;
}
