#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int n = nums.size() - 1;
        int l = 0, r = n;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (nums[mid] == mid) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        if (l == nums[n]) {
            l++;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}