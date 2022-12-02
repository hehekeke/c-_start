//
// Created by eric on 2022/12/1.
//

#include <iostream>
using  namespace  std ;
int main0204() {
    // 默认显示6位有效数字  3.14152
    float  f1 = 3.141516f;
    double  d2 = 3.14151234;
    cout << f1 << endl ;
    cout << d2 << endl ;

    cout << " float type length " << sizeof(f1)<< endl ;
    cout << " double type length " << sizeof(d2)<< endl ;
    // 科学计数法
    float  f2 = 3e2; // 3 * 10~2
    cout << "f2 is :" << f2 << endl ;
    float  f3 = 3e-2;  // 3 * 0.1~2
    cout << "f3 is :" << f3 << endl ;


    return 0;
}
