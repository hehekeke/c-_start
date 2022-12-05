//
// Created by eric on 2022/12/5.
// 指针和数组的配置使用
//
#include <iostream>
using namespace std;
int main0704(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int * p = arr ;
    cout << "第一个元素:"<< arr[0]<<endl;
    cout << "指针访问第一个元素:"<< *p<<endl;
    for (int i = 0; i < 10; ++i) {
        cout << *p << endl ;
        p++;
    }
    return 0;
}
