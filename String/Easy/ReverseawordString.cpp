#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Method 1: Using vector
    string reversethewords(string s) {
        vector<string> words;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }

        if (!word.empty()) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string result = "";
        for (int j = 0; j < words.size(); j++) {
            result += words[j];
            if (j < words.size() - 1) {
                result += " ";
            }
        }
        return result;
    }

    // Method 2: Pointer approach (O(1) extra space)
    string reversethestring2(string s) {
        int i = s.size() - 1;
        string result = "";

        while (i >= 0) {
            // Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            int end = i;

            // Move to the start of the word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            string word = s.substr(i + 1, end - i);

            if (!result.empty()) {
                result += " ";
            }
            result += word;
        }
        return result;
    }
};

int main() {
    string input = "Welcome too Bhutan";
    string inputtwo = "Do DSA day and Night";

    Solution answer;

    cout << answer.reversethewords(input) << endl;
    cout << answer.reversethestring2(inputtwo) << endl;

    return 0;
}
