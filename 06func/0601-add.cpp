//
// Created by eric on 2022/12/4.
//
#include <iostream>
using  namespace std ;

int add(int num1 ,int num2) {
    return num1 + num2 ;
}
void  swap(int num1 , int num2) {
    cout << "交换前======" << endl;
    cout << "num1 =" << num1 << endl;
    cout << "num2 =" << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后======" << endl;
    cout << "num1 =" << num1 << endl;
    cout << "num2 =" << num2 << endl;

}
int main0601(){
    int a = 10;
    int b = 10;
    int c  = add(a,b);
    cout << "c = " << c << endl;


    a = 100 ;
    c  = add(a,b);
    cout << "c = " << c << endl;

    cout << "交换前======" << endl;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    swap(a,b);

    cout << "交换后======" << endl;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    return 0;
}



