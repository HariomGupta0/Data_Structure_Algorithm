#include <iostream>
using namespace std;


class Solution {
    public:
    string RemoveParenthesis(string s) {
        int counter = 0;
        string ans = "";

        for (int i=0; i<s.size();i++) (
            {
            if(s[i] == ')') counter--;
            if(counter !=0) ans.push_back    (s[i]);
            if(s[i] == '(') counter++;
            }
        );
        return ans;
                }
};


int main() {
    Solution sol;
    string bracket = "(())(()())";

    string s = sol.RemoveParenthesis(bracket);
    cout << s;
    return 0;
}
