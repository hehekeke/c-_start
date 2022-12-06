//
// Created by eric on 2022/12/6.
//
#include <iostream>

using namespace std;


int * func01() {
    // 利用 new 关键字 可以在堆区开辟数据
    // 指针本质 还是分配到栈上，但是指针保存的数据是放到堆上面的
    int *p = new int(1);
    return p;

}

int main() {
    int *p = func01();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
