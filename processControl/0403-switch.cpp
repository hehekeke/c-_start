//
// Created by eric on 2022/12/3.
//

#include <iostream>
using  namespace std ;
int main0403(){
    cout << "请给电影进行打分" << endl;
    int score = 0;
    cin >> score;
    cout << "打分: " << score << endl;
    switch (score ) {
        case 10:
            cout << "10分  经典电影" << endl;
            break; // 退出当前分支
        case 5:
            cout << "5分  一般电影" << endl;
            break; // 退出当前分支
        case 1:
            cout << "1分  垃圾电影" << endl;
        default:
            cout << "走到 default 分支 " << endl;
            break;
    }

    return  0;
}