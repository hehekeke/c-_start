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
    d1.push_back(10);
    d1.push_back(20);

    // 头插
    d1.push_front(100);
    d1.push_front(200);

    printDeque(d1);  // 200 100 10 20

    // 尾删除
    d1.pop_back() ;  // 200 100 10
    // 头删除
    d1.pop_front() ;  // 100 10
}

void test02(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(40);

    // insert 插入
    d1.insert(d1.begin(),100); // 100 10 20 30 40

    d1.insert(d1.begin(),2,99); // 99 99 100 10 20 30 40

    // 按照区间进行插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d1.insert(d1.begin(),d2.begin(),d2.end());  // 1 2 3 99 99 100 10 20 30 40
    printDeque(d1);
}

// 删除
void test03(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(40);

    //删除
    d1.erase(d1.begin()) ; //20 30 40
    printDeque(d1);
    // 按照区间删除

    d1.erase(d1.begin() ,d1.end()) ; // null
    d1.clear(); // null

}

int main(){
    test03();
    return 0;
}