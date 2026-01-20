#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseAnArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        for (int i=0;i<n;i++) {
            ans[i] = arr[n-1 -i];
        }

        return ans;
}

int main() {
    vector<int> trial = {12,21,1221,34,3,4,32,};
    vector<int> reversed_array = reverseAnArray(trial);

    for (int x:reversed_array) {
        cout << x << " ";
    }

}