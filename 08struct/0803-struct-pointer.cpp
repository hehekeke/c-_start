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
int main0803 (){
    Student s1 = {"张三",1,2} ;
    Student * p = &s1 ;

    p->name = "往往";
    //3、通过指针访问结构体变量中的数据
    // 通过结构体指针访问结构体中的属性，需要利用’-〉
    cout << "姓名:" << s1.name << " " ;
    cout << "年龄:" << s1.age << " " ;
    cout << "分数:" << s1.source << "  " ;
    cout << endl;
}
