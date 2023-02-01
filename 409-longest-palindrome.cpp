#include "include/headers.h"

class Solution {
 public:
  map<char, int> mp;
  int longestPalindrome(string s) {
    for (auto c : s) {
      mp[c]++;
    }
    int res = 0;
    bool flag = false;
    for (auto it : mp) {
      std::cout << it.second << std::endl;
      if (it.second % 2 == 0) {
        res += it.second;
      }
      if (it.second % 2) {
        res += (it.second / 2) * 2;
        flag = true;
      }
    }
    if (flag) {
      res += 1;
    }
    return res;
  }
};

int main() {
  Solution s;
  std::cout << s.longestPalindrome("ccc") << std::endl;
}