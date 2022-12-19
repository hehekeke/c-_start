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
  pair<set<int>::iterator, bool> ret = s.insert(1);
  if (ret.second) {
    cout << "第一次插入成功" << endl;
  } else {
    cout << "第一次插入失败" << endl;
  }
  ret = s.insert(1);
  if (ret.second) {
    cout << "第二次插入成功" << endl;
  } else {
    cout << "第二次插入失败" << endl;
  }

  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++) {
    cout << *it << " "; // 1 1 2
  }
}

int main() {
  test01();
  return 0;
}
