//
// Created by eric on 2022/12/9.
//
#include "algorithm"
#include <iostream>
using namespace std;

#include "list"
void printList(const list<int> &L) {
  for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}
// L1[0]不可以用[口访问1ist容器中的元素
////L1.at(0)
// 不可以用at方式访问list容器中的元素
/// 原因是1ist本质链表，不是用连续线性空间存储数据，迭代器也是不支持随机

void test01() {
  list<int> L;
  L.push_back(1);
  L.push_back(2);
  L.push_back(3);
  L.push_back(4);
  printList(L); // 100 1 2 3
  cout << "第一个元素:" << L.front() << endl;
  cout << "最后一个元素:" << L.back() << endl;
}

int main() {
  test01();
  return 0;
}
