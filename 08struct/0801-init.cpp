//
// Created by eric on 2022/12/5.
//总结1：定义结构体时的关键字是struct,不可略
//总结2：创建结构体变量时，关键字struct可以省略
// 总结3：结构体变量利用操作符"."访问成员


#include <iostream>
using namespace std;

struct Student{
    string name ;
    int  age ;
    int  source ;

};

int main0801(){
    // struct 关键字是可以省略的
      Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.source = 100;
    cout << "姓名:" << s1.name << " " ;
    cout << "年龄:" << s1.age << " " ;
    cout << "分数:" << s1.source << "  " ;
    cout << endl;

    struct  Student s2 = {"李四",20,90 };
    cout << "姓名:" << s2.name << " " ;
    cout << "年龄:" << s2.age << " " ;
    cout << "分数:" << s2 .source << "  " ;
    cout << endl;


    return  0;
}