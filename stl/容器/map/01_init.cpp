//
// Created by eric on 2022/12/9.
//
#include "algorithm"
#include <iostream>
using namespace std;

#include "map"
void printMap(const map<int, int> &L) {
  for (map<int, int>::const_iterator it = L.begin(); it != L.end(); it++) {
    cout << it->first << " " << it->second << " " << endl;
  }
  cout << endl;
}
// 初始化操作
void test01() {
  map<int, int> mp;
  mp.insert(pair<int, int>(1, 10));
  mp.insert(pair<int, int>(2, 10));
  mp.insert(pair<int, int>(3, 10));
  mp.insert(pair<int, int>(4, 10));
  printMap(mp);

  // 拷贝构造
  map<int, int> mp2(mp);
  printMap(mp2);

  // =
  map<int, int> mp3;
  mp3 = mp2;
  printMap(mp3);
}

int main() {
  test01();
  return 0;
}
