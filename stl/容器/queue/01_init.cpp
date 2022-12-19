//
// Created by eric on 2022/12/9.
//
#include "algorithm"
#include <iostream>
using namespace std;

#include "queue"
// 初始化操作
void test01() {
  queue<int> q;

  // 入栈
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  cout << "q size:" << q.size() << endl;
  // 出栈
  while (!q.empty()) {
    cout << "对头元素:" << q.front() << endl;
    cout << "对尾元素:" << q.back() << endl;
    // 出队
    q.pop();
  }
  cout << "q size:" << q.size() << endl;
}

int main() {
  test01();
  return 0;
}
