#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int minx = 1e9 + 7, maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {
            maxprofit = max(maxprofit, prices[i] - minx);
            minx = min(minx, prices[i]);
        }
        return maxprofit;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}