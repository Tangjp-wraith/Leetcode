#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    int getsum(int x) {
        int ans = 0;
        while (x) {
            ans += x % 10;
            x /= 10;
        }
        return ans;
    }

public:
    int movingCount(int m, int n, int k) {
        if (k == 0) {
            return 1;
        }
        vector<vector<int>> vis(m, vector<int>(n, 0));
        int ans = 1;
        vis[0][0] = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((i == 0 && j == 0) || getsum(i) + getsum(j) > k) {
                    continue;
                }
                if (i >= 1) {
                    vis[i][j] |= vis[i - 1][j];
                }
                if (j >= 1) {
                    vis[i][j] |= vis[i][j - 1];
                }
                ans += vis[i][j];
            }
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