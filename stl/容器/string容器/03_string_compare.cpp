//
// Created by eric on 2022/12/9.
//
#include <iostream>
#include "algorithm"
using  namespace std ;

// 赋值
void  test01(){
    string str1 = "Hello World";
    string str2 = "Hello World";
    int compareRes =  str1.compare(str2);
    cout << "compareRes = " << compareRes << endl;

}
int main(){
    test01();
    return 0;
}
