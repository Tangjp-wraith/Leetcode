#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    map<int, int> mp;
public:
    int findRepeatNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        for (auto i: nums) {
            if (mp.find(i) != mp.end()) {
                return i;
            }
            mp[i] = 1;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}