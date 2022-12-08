//
// Created by eric on 2022/12/8.
//
#include <iostream>
using  namespace  std;

/**
 * 重载的注意事项
 */

void func1104(int &a ) { // int & a = 10  ;  是不合法的
    cout<< " func1104(int &a ) 调用" << endl;
}

void func1104(const int &a ) { // cons int & a = 10  ; 合法的 , 所以可以直接传递数字10
    cout<< " func1104(const int &a ) 调用" << endl;
}

// 当出现函数重载的时候，就不写默认参数了  ; 可能会存在歧义 ，比如下面的了例子
void func1104_1(int a ,int b = 10) {
    cout<< " func1104_1(nt a ,int b = 10 ) 调用" << endl;
}
void func1104_1(int a ) {
    cout<< " func1104_1(nt a ) 调用" << endl;
}


int main1104(){
    int a  = 10 ;
    func1104(a);

    func1104(10);

    return 0 ;
}
