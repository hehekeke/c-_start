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

  // 头插
  L1.push_front(100);
  L1.push_front(200);

  // 遍历链表
  printList(L1); // 200 100 1 2 3 4

  //尾删除
  L1.pop_back();
  printList(L1); // 200 100 1 2 3

  //头删除
  L1.pop_front();
  printList(L1); // 100 1 2 3

  // insert 插入
  L1.insert(L1.begin(), 888);
  printList(L1); // 888 100 1 2 3

  list<int>::iterator it = L1.begin();

  // 删除
  it = L1.begin();
  L1.erase(++it);
  printList(L1); // 888 1 2 3

  L1.push_front(1000);
  L1.push_front(1000);
  printList(L1); // 1000 1000 888 1 2 3
  L1.remove(1000);
  printList(L1); // 888 1 2 3

  // 清空
  L1.clear();
}

int main() {
  test01();
  return 0;
}
