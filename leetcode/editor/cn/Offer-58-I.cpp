#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(temp!=""){
                    ans.push_back(temp);
                    temp="";
                }
            }
            else {
                temp+=s[i];
            }
        }
        if(temp!=""){
            ans.push_back(temp);
        }
        string ret="";
        for(int i=ans.size()-1;i>=0;i--){
            ret+=ans[i];
            if(i!=0) {
                ret+=" ";
            }
        }
        return ret;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout<<res<<endl;
}