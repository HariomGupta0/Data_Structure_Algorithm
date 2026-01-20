#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arr = {1,2,3,4,5};
    int sum = 0;
    int n = arr.size();
    for (int i=0; i<n;i++) {
        for (int j=i;j<n;j++) {
            for (int k=i;k<=j;k++) {
                sum = sum + arr[k];
            }
        }
    }

    cout << sum;

};