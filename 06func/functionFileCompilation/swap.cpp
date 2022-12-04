//
// Created by eric on 2022/12/4.
//

#include "swap.h"

void  swap(int num1 , int num2) {
    cout << "交换 前======" << endl;
    cout << "num1 =" << num1 << endl;
    cout << "num2 =" << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后======" << endl;
    cout << "num1 =" << num1 << endl;
    cout << "num2 =" << num2 << endl;

}
