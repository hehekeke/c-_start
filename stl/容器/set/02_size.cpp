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
  if (s.empty()) {
    cout << "set is empty" << endl;
  } else {
    cout << "set size is :" << s.size() << endl; //  set size is :4
  }
}

void swap() {
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);

  set<int> s2;
  s2.insert(10);
  s2.insert(20);
  s2.insert(30);
  s2.insert(40);

  printSet(s);
  printSet(s2);
  s.swap(s2);
  printSet(s);
  printSet(s2);
}

int main() {
  //  test01();
  swap();
  return 0;
}
