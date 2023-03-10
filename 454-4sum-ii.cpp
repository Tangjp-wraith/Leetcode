#include <unordered_map>

#include "include/headers.h"

class Solution {
 public:
  int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                   vector<int>& nums4) {
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;
    for (auto u : nums1) {
      for (auto v : nums2) {
        mp1[u + v]++;
      }
    }
    for (auto u : nums3) {
      for (auto v : nums4) {
        mp2[u + v]++;
      }
    }
    int ans = 0;
    for (auto& u : mp1) {
      if (mp2.find(-1 * u.first) != mp2.end()) {
        ans += u.second * mp2[-1 * u.first];
      }
    }
    return ans;
  }
};

int main() { return 0; }