#include "include/headers.h"

class Solution {
 public:
  int maxArea(vector<int>& height) {
    int res = -1, i = 0, j = height.size() - 1;
    while (i < j) {
      res = (height[i] < height[j]) ? max(res, (j - i) * height[i++])
                                    : max(res, (j - i) * height[j--]);
    }
    return res;
  }
};