//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"
using  namespace std ;

// 赋值
void  test02(){
    string str1 = "我" ;
    str1 += "爱玩游戏";
     cout <<  "str1 = " << str1  << endl;

    str1 += ":";
    cout <<  "str1 = " << str1  << endl;


    string str2 = " LOL DNF";
    str1 += str2 ;
    cout <<  "str1 = " << str1  << endl;

    string str3 = "I " ;
    str3.append(" Love ") ;
    cout <<  "str3 = " << str3   << endl;

    str3.append("game abcde" , 4) ;
    cout <<  "str3 = " << str3   << endl;

//    str3.append(str2);
    str3.append(str2,0,4 );
    cout <<  "str3 = " << str3   << endl;


}


// 查找
void  test03(){
    string str1 = "abcdefgde";
    int pos =  str1.find("de");
    cout << "pos = " << pos << endl; // 3

    // rfind  从右往左查看
     pos =  str1.rfind("de");
    cout << "pos = " << pos << endl; // 7
}

//替换
void test04(){
    string str1 = "abcdefgde";
    str1.replace(1,3,"1111");
    cout << "str1 = " << str1 << endl; // 7
}
int main(){
//    test02();
    test03();
    test04();
    return 0;
}
