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
  if (L1.empty()) {
    cout << "L1 is empty" << endl;
  } else {
  }
  // 重新指定大小
  L1.resize(10); // 1 2 3 4 0 0 0 0 0 0
  printList(L1);

  L1.resize(2); // 1 2
  printList(L1);
}

int main() {
  test01();
  return 0;
}
