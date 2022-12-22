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
  // 1、第一种插入
  mp.insert(pair<int, int>(1, 10));
  // 2、第2种插入
  mp.insert(make_pair(2, 20));
  // 3、第3种插入
  mp.insert(map<int, int>::value_type(3, 30));
  // 4、第4种插入
  mp[4] = 40;
  printMap(mp);

  // 删除
  mp.erase(mp.begin());
  printMap(mp);

  mp.erase(3);
  printMap(mp);

  mp.erase(mp.begin(), mp.end());
  mp.clear();
}

int main() {
  test01();
  return 0;
}
