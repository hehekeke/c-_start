//
// Created by eric on 2022/12/6.
// 结构体嵌套

#include <iostream>
using namespace std;
struct Student{
    string name ;
    int  age ;
    int  source ;

};
struct  Teacher {
    int id ;
    string name ;
    int age ;
    struct Student stu ;
};
int main0804(){

    Teacher t ;
    t.name = "老师";
    t.age = 40;
    t.id = 3;
    t.stu.name = "学生";
    t.stu.age = 4;
    t.stu.source = 100;




}
