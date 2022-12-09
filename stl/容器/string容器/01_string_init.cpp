//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"
using  namespace std ;

 // 初始化操作
void test01(){
    string s1 ;
    const char * str = "hello world";
    string s2(str);
    cout <<  "s2 = " << s2 << endl;

    string s3(s2) ;
    cout <<  "s3 = " << s3 << endl;

    string s4(10,'a') ;
    cout <<  "s4 = " << s4  << endl;
}
// 赋值
void  test02(){
    string str1 ;
    str1 = "hello world";
    cout <<  "str1 = " << str1  << endl;

    string str2 ;
    str2 = str1;
    cout <<  "str2 = " << str2  << endl;

    string str3 ;
    str3 = 'a';
    cout <<  "str3 = " << str3   << endl;

    string str4 ;
    str4.assign("Hello C++");
    cout <<  "str4 = " << str4   << endl;

    string str5 ;
    str5.assign("Hello C++",5);
    cout <<  "str5 = " << str5   << endl;

     string str6 ;
    str6 .assign(str5);
    cout <<  "str6 = " << str6   << endl;

    string str7 ;
    str7 .assign(10 ,'w');
    cout <<  "str7 = " << str7   << endl;
}

int main(){
    test01();
    test02();
    return 0;
}
