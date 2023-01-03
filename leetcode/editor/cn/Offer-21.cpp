#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> exchange(vector<int> &nums) {
        deque<int> que;
        for (int i: nums) {
            if (i % 2) {
                que.push_front(i);
            } else {
                que.push_back(i);
            }
        }
        vector<int> ans;
        while (!que.empty()) {
            ans.push_back(que.front());
            que.pop_front();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}