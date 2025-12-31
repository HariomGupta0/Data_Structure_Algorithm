#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
    public:
        string Longest_Common_Prefix(vector<string> &str,int n) {

            if (str.empty()) return "";
            sort(str.begin(), str.end());
            string s1 = str[0];
            string s2 = str[n-1];
            int i = 0;

            for (int j = 0; j<s2.size() ;j++) {
                if (s1[i] == s2[i]) {
                    i++;
                } else {
                    break;
                }    
            }
            return s1.substr(0,i);
            
        }
};

int main() {
    vector <string> input = {"flower", "flow", "flight"};
    int n = input.size();
    Solution sol;
    string answer = sol.Longest_Common_Prefix(input, n);
    cout << answer;
}

