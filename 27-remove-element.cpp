#include "include/headers.h"

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int l = 0;
    for (int r = 0; r < nums.size(); ++r) {
      if (val != nums[r]) {
        nums[l++] = nums[r];
      }
    }
    return l;
  }
};

int main() { return 0; }