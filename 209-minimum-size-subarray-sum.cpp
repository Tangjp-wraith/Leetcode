#include "include/headers.h"

class Solution {
 public:
  int minSubArrayLen(int target, vector<int>& nums) {
    int sum = 0, sublen = 0, res = INT_MAX, i = 0;
    for (int j = 0; j < nums.size(); ++j) {
      sum += nums[j];
      while (sum >= target) {
        sublen = (j - i + 1);
        res = min(res, sublen);
        sum -= nums[i++];
      }
    }
    return res == INT_MAX ? 0 : res;
  }
};

int main() { return 0; }