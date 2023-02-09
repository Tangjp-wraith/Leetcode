#include "include/headers.h"

class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> mp;
    for(auto &str:strs){
      string now=str;
      sort(now.begin(),now.end());
      mp[now].emplace_back(str);
    }
    vector<vector<string>> ans;
    for(auto iter:mp){
      ans.emplace_back(iter.second);
    }
    return ans;
  }
};

int main(){

  return 0;
}