//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main0401(){
    // 输入考试的分数
    cout << "输考入的参数:" << endl ;
    int a ;
    cin >> a ;
    cout << "你的参数:" << a << endl ;
    if(a > 600 ){
        cout << "考上了一本:"  << endl ;
    }else{
        cout << "没有考上一本:"  << endl ;
    }

    if (a < 600) {
        cout << "你的分数<600"  << endl ;
    }else if(a > 600 && a < 2000){
        cout << "你的分数大约600 ~ 2000"  << endl ;
    }else{
        cout << "你的分数 >  2000"  << endl ;
    }



}

