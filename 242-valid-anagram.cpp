#include "include/headers.h"

class Solution {
 public:
  map<char, int> ch;
  bool isAnagram(string s, string t) {
    for (int i = 0; i < s.size(); i++) {
      ch[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++) {
      ch[t[i]]--;
      if (!ch[t[i]]) {
        ch.erase(t[i]);
      }
    }
    if (!ch.empty()) {
      return false;
    }
    return true;
  }
};