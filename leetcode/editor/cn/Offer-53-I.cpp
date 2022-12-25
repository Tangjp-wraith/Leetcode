#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (!nums.size()) {
            return 0;
        }
        int a = 0, b = 0;
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        a = l;
        if (nums[a] != target) {
            return 0;
        }
        l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r + 1) >> 1;
            if (nums[mid] <= target) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        if (nums[r] != target) {
            return 0;
        }
        b = r;
        return b - a + 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{5, 7, 7, 8, 8, 10};
    auto res = s.search(data, 8);
    cout << res << endl;
}