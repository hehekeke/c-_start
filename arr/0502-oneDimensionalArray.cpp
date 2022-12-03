//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main0502(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    cout << "arr 数组的内存空间 是 :" << sizeof (arr )<< endl;
    cout << "arr 每个元素的内存空间 是 :" << sizeof (arr[0])<< endl;
    cout << "元素的个数 是 :" << sizeof (arr ) /sizeof (arr[0])<< endl;


    cout << "arr 数组的首地址是 ： " <<  arr << endl ;
    cout << "arr 数组的第一个元素的地址是 ： " <<  &arr[0] << endl ;
    cout << "arr 数组的第二个元素的地址是 ： " <<  &arr[1] << endl ;

    int arr1[5]={300,350,200,400,250} ;
    int max = 0 ;
    for (int i = 0; i < 5; ++i) {
        if (max < arr1[i]) {
            max = arr1[i];
        }
    }
    cout << "arr1 的 max is  ： " <<  max << endl ;

    int arr2[] = {1,3,2,5,4};
    int start = 0;
    int end = sizeof (arr2 ) / sizeof (arr2[0]) - 1;

    while (start < end ) {
        int temp = arr2[start];
        arr2[start] = arr2[end];
        arr2[end] = temp ;
        start++;
        end -- ;
    }

    for (int i = 0; i < 5; ++i) {
        cout  <<  arr2[i] << endl ;

    }

}