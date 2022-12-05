//
// Created by eric on 2022/12/6.
//
/**
 * 结构体作为函数参数
 */
#include <iostream>
using namespace std;
struct Student{
    string name ;
    int  age ;
    int  source ;

};
void printStu1(Student s1 ) {
    cout << "printStu1 :"  << " " ;
    cout << "姓名:" << s1.name << " " ;
    cout << "年龄:" << s1.age << " " ;
    cout << "分数:" << s1.source << "  " ;
    cout << endl;
}
void printStu2(Student * s1 ) {
    cout << "printStu2 :"  << " " ;
    cout << "姓名:" << s1->name << " " ;
    cout << "年龄:" << s1->age << " " ;
    cout << "分数:" << s1->source << "  " ;
    cout << endl;
}

 int main0805(){
     Student s1 = {"张三",1,2} ;
     printStu1(s1);
     printStu2(& s1);
}
