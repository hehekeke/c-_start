//
// Created by eric on 2022/12/10.
//
#include "iostream"
#include "vector"

#include "algorithm"

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
    d1.push_front(100);
    d1.push_front(200);

    printDeque(d1);  // 200 100 1 2

    cout << "排序之后的结果:" << endl;

    sort(d1.begin(),d1.end()) ;
    printDeque(d1);

}

int main(){
    test01();
    return 0;
}