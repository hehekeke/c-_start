//
// Created by eric on 2022/12/9.
//
#include "algorithm"
#include <iostream>
using namespace std;

#include "stack"
// 初始化操作
void test01() {
  stack<int> s;
  // 入栈
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  cout << "s size:" << s.size() << endl;
  // 出栈
  while (!s.empty()) {
    cout << "栈顶的元素:" << s.top() << endl;
    s.pop();
  }
  cout << "s size:" << s.size() << endl;
}

int main() {
  test01();
  return 0;
}
