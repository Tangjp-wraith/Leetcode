#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target) {
        if (!matrix.size()) {
            return false;
        }
        for (int pos = 0; pos < matrix.size(); pos++) {
            if (!matrix[pos].size()) {
                return false;
            }
            if (matrix[pos][0] > target) {
                return false;
            }
            if (matrix[pos][0] == target) {
                return true;
            }
            int l = 0, r = matrix[pos].size();
            while (l < r) {
                int mid = (l + r) >> 1;
                if (matrix[pos][mid] == target) {
                    return true;
                } else if (matrix[pos][mid] < target) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<vector<int>> data{
            {}
    };
    auto res = s.findNumberIn2DArray(data, 5);
    cout << res << endl;
}