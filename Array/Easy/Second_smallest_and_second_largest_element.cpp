#include <iostream>
#include <algorithm>
using namespace std;

// Brute Force
void getElements(int arr[], int n) {

    if (n<=1) {
        cout << -1 << " " << 1;
        return;
    }

    sort(arr, arr + n);

    int small = arr[1];
    int large = arr[n - 2];

    cout << "Second smallest is :" << small <<endl;
    cout << "Second largest is :" << large <<endl;
}

int main() {
    int arr[] = {23,123,1231,312321,1222};
    int n = sizeof(arr)/sizeof(arr[0]);

    getElements(arr,n);

    return 0;
}