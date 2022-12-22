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
  mp.insert(make_pair(2, 20));
  mp.insert(make_pair(3, 30));
  mp.insert(make_pair(4, 40));

  map<int, int>::iterator pos = mp.find(3);
  if (pos != mp.end()) {
    cout << "find key = " << pos->first << ";value=" << pos->second << endl;
  } else {
    cout << "not find" << endl;
  }

  // 统计
  int num = mp.count(3);
  cout << "nums =  " << num << endl;
}

int main() {
  test01();
  return 0;
}
