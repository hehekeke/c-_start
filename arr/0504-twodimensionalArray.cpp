//
// Created by eric on 2022/12/4.
//
#include <iostream>
using  namespace std ;
int main(){
    // 二维数组的定义方式
    int arr1[2][3];
    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[0][2] = 3;
    arr1[1][0] = 4;
    arr1[1][1] = 5;
    arr1[1][2] = 6;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr1[i][j] << "   ";
        }
        cout << endl ;
    }

    int arr2[2][3] = {
            {1,2,3},
            {4,5,6}
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr2 [i][j] << "  ";
        }
        cout << endl ;
    }

    cout << " 二维数组的空间大小:" << sizeof(arr2 ) << endl;
    cout << " 二维数组的第一行占用的空间大小:" << sizeof(arr2[0] ) << endl;
    cout << " 二维数组的地址空间:" << arr2 << endl;
    cout << " 二维数组的中第一个元素占用的内存大小 :" << arr2[0][0] << endl;

    cout << " 第一行占用的首地址 :" << &arr2[0][0] << endl;
    cout << " 第二行占用的首地址 :" << &arr2[1][0] << endl;


    // 考试成绩的案例
    int score[3][3] = {
            {100,100,100},
            {90,50,100},
            {60,70,80}
    };
    string names[3] = {"张三","李四","王五"};
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += score[i][j];
        }
        cout << names[i] << "的总和 ：" << sum << endl;
    }

}