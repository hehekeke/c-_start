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
  // set 容器的特点：
  // 所有插入的元素插入的时候 ，自动排序了
  // set 不允许插入重复的值
  printSet(s); // 1 2 3 4

  // 拷贝构造函数
  set<int> s2(s);
  printSet(s2); // 1 2 3 4

  set<int> s3;
  s3 = s2;
  printSet(s3); // 1 2 3 4
}

int main() {
  test01();
  return 0;
}
