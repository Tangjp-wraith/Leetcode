#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string prev = "";
        for (int i = 0; i < n; i++) {
            prev += s[i];
        }
        return s.substr(n, s.size() - n + 1) + prev;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}