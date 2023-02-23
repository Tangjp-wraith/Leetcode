#include "include/headers.h"

class Solution {
 public:
  string reverseWords(string s) {
    vector<string> res;
    string pos = "";
    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
      while (s[i] == ' ' && i < s.size()) {
        if (pos != "") {
          flag = true;
        }
        i++;
      }
      if (flag && pos != "") {
        res.push_back(pos);
        pos = "";
        flag = false;
      }
      if (s[i] != ' '&&i<s.size()) {
        pos += s[i];
      }
    }
    if (pos != "" && flag == false) {
      res.push_back(pos);
    }
    string ans = "";
    for (int i = res.size() - 1; i >= 0; i--) {
      if (i != 0) {
        ans += (res[i] + " ");
      } else {
        ans += res[i];
      }
    }
    return ans;
  }
};

int main() {
  Solution s;
  cout << s.reverseWords(" hello world ");
}