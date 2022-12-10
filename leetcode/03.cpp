//
// Created by eric on 2022/12/9.
//
#include "iostream"
using namespace std;

#include "map"
#include "unordered_map"
#include "vector"

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> window;
    int left = 0;
    int right = 0;
    int res = 0;
    while (right < s.size()) {
      char c = s[right];
      right++;
      window[c]++;
      while (window[c] > 1) {
        char d = s[left];
        left++;
        window[d]--;
      }
      res = max(right - left, res);
    }
    return res;
  }
};

int main() {
  Solution s;
  int res = s.lengthOfLongestSubstring("wwwwww");
  cout << res << endl;
  return 0;
}
