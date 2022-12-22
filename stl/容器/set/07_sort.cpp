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
class MyCompare {
public:
  bool operator()(int v1, int v2) { return v1 > v2; }
};
// 初始化操作
void test01() {
  set<int> s;
  s.insert(11);
  s.insert(44);
  s.insert(22);
  s.insert(33);
  printSet(s); //  11 22 33 44

  // 从大到小
  set<int, MyCompare> s2;
  s2.insert(11);
  s2.insert(44);
  s2.insert(22);
  s2.insert(33);

  for (set<int, MyCompare>::const_iterator it = s2.begin(); it != s2.end();
       it++) {
    cout << *it << " "; // 44 33 22 11
  }
  cout << endl;
}

int main() {
  test01();
  return 0;
}
