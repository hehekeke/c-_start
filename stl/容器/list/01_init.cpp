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
// 初始化操作
void test01() {
  list<int> L1;
  L1.push_back(1);
  L1.push_back(2);
  L1.push_back(3);
  L1.push_back(4);
  // 遍历链表
  printList(L1);

  // 区间方式
  list<int> L2(L1.begin(), L1.end());
  printList(L2);

  //拷贝构造
  list<int> L3(L2);
  printList(L3);

  // n  个 elem
  list<int> L4(10, 100);
  printList(L4);
}

int main() {
  test01();
  return 0;
}
