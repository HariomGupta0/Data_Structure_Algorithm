#include <iostream>
using namespace std;


//Brute Force
bool isSorted(int arr[],int n) {
    for (int i=0; i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[j] < arr[i]) {
               return false;
            }
            
        }
    }

  // bool ans = isSorted(arr2, n);
    
    // // Output result
    // if (ans) cout << "True" << endl;
    // else cout << "False" << endl;
    return true;
};

//Optimal Approach
bool isSortedOptimal(int arr[], int n) {
    for (int i=1;i<n;i++) {
        if (arr[i] < arr[i-1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {1,2,3,4,5};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    bool ans = isSortedOptimal(arr,n2);
    cout << ans;
    return 0;
   
}