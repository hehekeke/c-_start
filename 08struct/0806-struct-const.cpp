//
// Created by eric on 2022/12/6.
//
#include <iostream>
using namespace std;
struct Student{
    string name ;
    int  age ;
    int  source ;

};
// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出
void printStu(const  Student *s1 ) {

    //    s1->age = 100; //操作失败，因为加了const修饰
    cout << "printStu1 :"  << " " ;
    cout << "姓名:" << s1->name << " " ;
    cout << "年龄:" << s1->age << " " ;
    cout << "分数:" << s1->source << "  " ;
    cout << endl;
}

int main0806(){
    Student s1 = {"张三",1,2} ;
    printStu(&s1);
    return 0;
}
