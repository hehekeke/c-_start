//
// Created by eric on 2022/12/7.
//
#include <iostream>
using  namespace  std;

// 需要注意的是： 如果某个位置已经有默认值，那么从这个位置往后，都需要有默认值的


int func1101(int a ,int b =10 , int c = 20) {
    return a +b + c ;
}

// 如果函数声明有默认参数 。那么函数实现就不能有默认参数
// 声明 跟 实现 只能有一个有默认参数；
int func1101_1(int a =10 ,int b =10);
int func1101_1(int a , int b){
    return a + b ;
}

int main1101(){
    cout << func1101(100) << endl;
    return 0;
}

