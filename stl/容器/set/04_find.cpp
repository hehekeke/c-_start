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

  set<int>::iterator pos = s.find(3);
  if (pos != s.end()) {
    cout << "找到元素了：" << *pos << endl;
  } else {
    cout << "没找到元素" << endl;
  }

  // 统计30的个数
  int num = s.count(1);
  cout << "num = " << num << endl;
}

int main() {
  test01();
  return 0;
}
