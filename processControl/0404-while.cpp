//
// Created by eric on 2022/12/3.
//
#include <iostream>
using  namespace std ;
int main0404(){
    int num = 0 ;
    while (num < 10) {
        cout << num << endl ;
        num++;
    }


    // 随机数游戏
    int target =  rand() % 100 + 1 ;
    cout << "需要猜到的数字是 ： " << target << endl ;
    while (1) {
        int val = 0;
        cin >> val ;
        if (val == target) {
            cout << "猜对嘞 ： " << target << endl ;
            break; // 可以使用break 退出当前循环
        }else if (val < target) {
            cout << " 比目标值小 ： "  << endl ;
        }else{
            cout << " 比目标值大 ： "  << endl ;
        }
    }



    return 0 ;
}