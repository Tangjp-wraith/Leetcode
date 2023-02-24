#include "include/headers.h"

class Solution {
 public:
  bool repeatedSubstringPattern(string s) {
    string str = s + s;
    str.erase(str.begin());
    str.erase(str.end() - 1);
    if (str.find(s) != std::string::npos) {
      return true;
    }
    return false;
  }
};

int main() { return 0; }