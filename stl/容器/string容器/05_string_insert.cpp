//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"

void test02();

using  namespace std ;

// 赋值
void  test01(){
    string str1 = "Hello";
    str1.insert(1,"222");
    cout << str1  << " " << endl ; // H222ello

    str1.erase(1,3) ; //
    cout << str1  << " " << endl ; // Hello
}

void test02() {
    string str1 = "Hello";
    string substr =  str1.substr(1,3);
    cout << "substr = "  << substr << endl ;
}


int main(){
    test01();
    test02();
    return 0;
}


