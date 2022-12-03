//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main0501(){
    // 定义方式 1  ：数据类型 数组名【长度】
    int arr1[10];
    arr1[0] = 1;
    arr1[1] = 2;
    cout << arr1[0] << endl ;
    cout << arr1[1] << endl ;

    // 定义方式 2  ：数据类型 数组名【长度】 =  {val1 , val2 ,val3}
    int arr2[3] = {10,20,30};
    cout << arr2[0] << endl ;
    cout << arr2[1] << endl ;


    // 定义方式 3  ：数据类型 数组名【】 =  {val1 , val2 ,val3}
    int arr3[] = {100,200,300};
    for (int i = 0; i <3 ; ++i) {
        cout << arr3[i ] << endl ;
    }
}
