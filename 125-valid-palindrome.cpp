#include "include/headers.h"

class Solution {
 public:
  bool isPalindrome(string s) {
    string str = handle(s);
    int i = 0, j = str.size() - 1;
    while (i < j) {
      if (str[i++] != str[j--]) {
        return false;
      }
    }
    return true;
  }

  string handle(string s) {
    string str = "";
    for (auto c : s) {
      if (c >= '0' && c <= '9') str += (char)(c);
      if (c >= 'a' && c <= 'z') str += (char)(c);
      if (c >= 'A' && c <= 'Z') str += (char)(c + 32);
    }
    return str;
  }
};

int main() {
  Solution s;
  cout << s.isPalindrome("0P") << endl;
  return 0;
}