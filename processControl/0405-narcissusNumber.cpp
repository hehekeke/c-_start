//
// Created by eric on 2022/12/3.
//

#include <iostream>
using  namespace std ;
int main0405(){
    // 三位数的水仙花数字

    int num = 100;
    do{
        int a = 0 ; // 个位数字
        a = num % 10;
        int b = 0 ; // 十位数字
        b = num /10  % 10;
        int c = 0 ; // 百位数字
        c = num / 100 ;
        if (a*a*a + b*b*b + c*c*c ==  num) {
            cout << num << endl ;

        }
        num ++;
    } while(num < 1000);

}
