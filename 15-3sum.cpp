#include <unordered_set>

#include "include/headers.h"

class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        break;
      }
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }
      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right) {
        if (nums[i] + nums[left] + nums[right] > 0) {
          --right;
        } else if (nums[i] + nums[left] + nums[right] < 0) {
          ++left;
        } else {
          ans.push_back({nums[i], nums[left], nums[right]});
          while (right > left && nums[right] == nums[right - 1]) {
            --right;
          }
          while (right > left && nums[left] == nums[left + 1]) {
            ++left;
          }
          --right;
          ++left;
        }
      }
    }
    return ans;
  }
};

int main() { return 0; }