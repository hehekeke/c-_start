//
// Created by eric on 2022/12/10.
//
#include "iostream"
#include "vector"

#include "deque"

using namespace std;

void printDeque(const deque<int> &d){
    for(deque<int>::const_iterator it =d.begin() ; it != d.end() ; it++) {
        cout << *it << " ";
    }
    cout << endl;
}


// 两端操作
void test01(){
    deque<int> d1;

    //尾插
    d1.push_back(1);
    d1.push_back(2);

    // 头插
    d1.push_front(100);
    d1.push_front(200);

    printDeque(d1);  //200 100 1 2

    // 通过 [] 访问元素
    for(int i = 0; i < d1.size(); ++i) {
        cout << d1[i] << " " ;
    }
    cout << endl;

    //通过 at() 访问
    for (int i = 0; i < d1.size(); ++i) {
        cout << d1.at(i) << " " ; // 200 100 1 2
    }
    cout << endl;


    cout << "第一个元素:" << d1.front() << endl ;  // 200
    cout << "最后一个元素:" << d1.back() << endl ; // 2

}

int main(){
    test01();
    return 0;
}