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
  pair<string, int> p("Tom", 20);
  cout << "name :  " << p.first << " , age :" << p.second << endl;

  pair<string, int> p2 = make_pair("Jim", 30);
  cout << "name :  " << p2.first << " , age :" << p2.second << endl;
}

int main() {
  test01();
  return 0;
}
