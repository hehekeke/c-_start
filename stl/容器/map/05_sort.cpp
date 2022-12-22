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
class Compare {
public:
  bool operator()(int v1, int v2) { return v1 > v2; }
};
// 初始化操作
void test01() {
  map<int, int, Compare> mp;
  mp.insert(make_pair(1, 2));
  mp.insert(make_pair(2, 20));
  mp.insert(make_pair(3, 30));
  mp.insert(make_pair(4, 40));
}

int main() {
  test01();
  return 0;
}
