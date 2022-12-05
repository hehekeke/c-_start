//
// Created by eric on 2022/12/6.
//

#include <iostream>
using namespace std;
struct Student{
    string name ;
    int  source ;

};
struct Teacher {
    string name ;
    struct  Student sAarry[5] ;
};
void allocatorSpace(struct  Teacher tAarry[] , int len ){
    string nameSpace = "ABCDE";
    for (int i = 0; i < len; ++i) {
        tAarry[i].name = "Teacher_";
        tAarry[i].name += nameSpace[i];
        for (int j = 0; j < 5; ++j) {
            tAarry[i].sAarry[j].name =  "stu_";
            tAarry[i].sAarry[j].name =  nameSpace[i];
            tAarry[i].sAarry[j].source  = 90;
        }
    }
}
void printInfo(struct  Teacher tAarry[] , int len){
    for (int i = 0; i < len; ++i) {
        cout << "老师:" << tAarry[i].name << " " << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "学生:" << tAarry[i].sAarry[j].name << " " << endl;
        }
    }
}
int main(){
    struct Teacher tArray[3];
    allocatorSpace(tArray,3);
    printInfo(tArray,3);
    return  0;
}
