#include "include/headers.h"

class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int, int> mp;
    for (auto i : nums) {
      mp[i]++;
    }
    vector<vector<int>> buckets(n + 1);
    for (auto& it : mp) {
      buckets[it.second].emplace_back(it.first);
    }
    vector<int> res;
    for (int i = n; i >= 0; i--) {
      if (res.size() >= k) {
        break;
      }
      if (!buckets[i].empty()) {
        res.insert(res.end(), buckets[i].begin(), buckets[i].end());
      }
    }
    return res;
  }
};

int main() { return 0; }
