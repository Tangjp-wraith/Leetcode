#include <unordered_set>

#include "include/headers.h"

class Solution {
 public:
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > target && nums[i] >= 0) {
        break;
      }
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }
      for (int k = i + 1; k < nums.size(); k++) {
        if (nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) {
          break;
        }
        if (k > i + 1 && nums[k] == nums[k - 1]) {
          continue;
        }
        int left = k + 1;
        int right = nums.size() - 1;
        while (left < right) {
          if ((long long)nums[i] + nums[k] + nums[left] + nums[right] >
              target) {
            --right;
          } else if ((long long)nums[i] + nums[k] + nums[left] + nums[right] <
                     target) {
            ++left;
          } else {
            ans.push_back({nums[i], nums[k], nums[left], nums[right]});
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
    }
    return ans;
  }
};

int main() { return 0; }