#include "include/headers.h"

class Solution {
 public:
  int check(int x) {
    int sum = 0;
    while (x) {
      sum += (x % 10) * (x % 10);
      x /= 10;
    }
    return sum;
  }
  bool isHappy(int n) {
    int sum = check(n);
    unordered_set<int> st;
    st.insert(sum);
    while (1) {
      sum = check(sum);
      if (sum == 1) {
        return true;
      }
      if (st.find(sum) != st.end()) {
        return false;
      }else{
        st.insert(sum);
      }
    }
    return false;
  }
};
int main() { return 0; }