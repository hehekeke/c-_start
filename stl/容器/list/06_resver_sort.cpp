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

void test01() {
  list<int> L;
  L.push_back(1);
  L.push_back(2);
  L.push_back(3);
  L.push_back(4);
  printList(L); // 1 2 3 4
  L.reverse();
  printList(L); // 4 3 2 1
}
bool myCompare(int v1, int v2) {
  // 降序  第一个> 第二个数
  return v1 > v2;
}
void sort() {
  // 所有不支持随机访问的迭代器的容器，不可以使用标准算法
  list<int> L;
  L.push_back(2);
  L.push_back(3);
  L.push_back(1);
  L.push_back(4);
  printList(L); // 2 3 1 4
  L.sort();     // 默认 从小 到 大
  printList(L); // 1 2 3 4

  L.sort(myCompare); // 默认 从小 到 大
  printList(L);      // 4 3 2 1
}

int main() {
  //  test01();
  sort();
  return 0;
}
