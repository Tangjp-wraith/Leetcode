#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char firstUniqChar(string s) {
        if (!s.size()) {
            return ' ';
        }
        map<char, int> mp;
        for (auto c: s) {
            mp[c]++;
        }
        for (auto c: s) {
            if (mp[c] == 1) {
                return c;
            }
        }
        return ' ';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}