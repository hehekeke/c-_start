//
// Created by eric on 2022/12/7.
//
/**
 * 函数占位参数
 */
#include <iostream>
using  namespace  std;

//函数占位参数 ， 我们还用不到 ，后面的课程会用到

// 占位参数 ，可以有默认参数
void func1102(int a ,int ) {
    cout << "this is func" << endl;
}

void func1102_1(int a ,int = 10) {
    cout << "this is func" << endl;
}

int main1102(){
    func1102(1,2);
    func1102_1(1);
    return 0;
}

