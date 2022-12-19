//
// Created by eric on 2022/12/9.
//
#include "algorithm"
#include <iostream>
using namespace std;

#include "set"
void printSet(const set<int> &L) {
  for (set<int>::const_iterator it = L.begin(); it != L.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}
// 初始化操作
void test01() {
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  printSet(s); //  1 2 3 4
  // 删除
  s.erase(s.begin());
  printSet(s); // 2 3 4

  s.erase(3);
  printSet(s); // 2 4

  // 清空
  s.erase(s.begin(), s.end());
  s.clear();
  printSet(s); //
}

int main() {
  test01();
  return 0;
}
