//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"
using  namespace std ;

// 赋值
void  test01(){
    string str1 = "Hello World";
    //通过 [] 访问单个字符
    for (int i = 0; i < str1.size(); ++i) {
        cout << str1[i] << " ";
    }
    cout << endl;

    //通过at() 访问单个字符
    for (int i = 0; i < str1.size(); ++i) {
        cout << str1.at(i) << "   ";
    }
    cout << endl;

    // 修改字符
    str1[0] = 'X';
    cout << str1  << " " << endl ;

    str1.at(1) = 'X';
    cout << str1  << " ";

}
int main(){
    test01();
    return 0;
}
