//
// Created by eric on 2022/12/5.
//
#include <iostream>
using namespace std;
struct Student{
    string name ;
    int  age ;
    int  source ;

};
int main0802(){
     Student arr[] = {
             {"张三",10,20},
             {"张4",40,40},
             {"张5",50,50},
     };
     // 修改结构体数据
    arr[1].name = " change name";
    for (int i = 0; i < 3; ++i) {
        cout << "姓名:" << arr[i].name << " " ;
        cout << "年龄:" << arr[i].age << " " ;
        cout << "分数:" << arr[i].source << "  " ;
        cout << endl;
    } 
    return  0;
}
