//
// Created by eric on 2022/12/9.
//
#include "iostream"
using namespace std;

#include "map"
#include "string"
#include "vector"

class Solution {
public:
  string longestPalindrome(string s) {
    string res = "";
    if (s.size() <= 1) {
      return s;
    }
    for (int i = 0; i < s.size(); ++i) {
      string res1 = palindrome(s, i, i);
      string res2 = palindrome(s, i, i + 1);
      res = res.length() > res1.length() ? res : res1;
      res = res.length() > res2.length() ? res : res2;
    }
    return res;
  }
  string palindrome(string s, int l, int r) {
    while (l >= 0 && r < s.length() && s.at(l) == s.at(r)) {
      l--;
      r++;
    }
    return s.substr(l + 1, r - l - 1);
  }
};

int main() {
  Solution s;
  string res = s.longestPalindrome("www");
  cout << res << endl;
  return 0;
}
