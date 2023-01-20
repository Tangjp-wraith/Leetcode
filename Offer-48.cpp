#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (!s.size()) {
            return 0;
        }
        map<char, int> hash;
        vector<int> dp(s.size() + 1);
        dp[0] = 1;
        hash[s[0]] = 0;
        int res = dp[0];
        for (int i = 1; i < s.size(); i++) {
            if (hash.find(s[i]) == hash.end()) {
                dp[i] = dp[i - 1] + 1;
            } else {
                int j = hash[s[i]];
                if (i - j <= dp[i - 1]) {
                    dp[i] = i - j;
                } else {
                    dp[i] = dp[i - 1] + 1;
                }
            }
            hash[s[i]] = i;
            res = max(res, dp[i]);
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}