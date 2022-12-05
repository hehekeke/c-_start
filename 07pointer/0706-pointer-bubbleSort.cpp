//
// Created by eric on 2022/12/5.
//
#include <iostream>
using namespace std;
void  bubbleSort(int * arr ,int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp;
            }
        }

    }
}
int main0706(){
    int arr[] = {4,5,7,2,1,9,3,6};
    bubbleSort(arr,sizeof(arr)/ sizeof(arr[0]));
    for (int i = 0; i < 8; ++i) {
        cout << arr[i] <<  " " ;
    }
    return  0;
}