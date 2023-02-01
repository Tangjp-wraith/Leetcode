#include "include/headers.h"

class Solution {
 public:
  unordered_set<char> st;
  int lengthOfLongestSubstring(string s) {
    int rk = -1, res = 0;
    for (int i = 0; i < s.size(); i++) {
      if (i != 0) {
        st.erase(s[i - 1]);
      }
      while (rk + 1 < s.size() && !st.count(s[rk + 1])) {
        st.insert(s[rk + 1]);
        ++rk;
      }
      res = max(res, rk - i + 1);
    }
    return res;
  }
};