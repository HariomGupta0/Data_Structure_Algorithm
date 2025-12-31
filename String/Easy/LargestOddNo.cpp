#include <iostream>
using namespace std;

class Solution {
    public:
        string LargestOddNo( string s) {
            int i = s.size() - 1;
                string k;
                while (i>=0) {
                    if ((s[i] - '0')%2 == 0) {
                            i--;
                    } else {
            k =  s.substr(0,i+1);
            break;
        };
    }

    return k;


        }


    //Solution by Striver noob
    
};

int main() {
    string s = "12344";
    Solution sol;
    string answer = sol.LargestOddNo(s);
    cout << answer;   
}         