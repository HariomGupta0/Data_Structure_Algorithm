#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

//Brute Force
void getElementsbyBruteForce(int arr[], int n) {

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


//Better Approach

void getElementsbyBetter(int arr[], int n) {
    if (n<=1) {
        cout << "-1" << endl;
        return;
    }

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    for (int i = 0 ; i< n ; i++) {
        small = min(small,arr[i]);
        large = max(large,arr[i]);
    }

    for (int i=0 ; i<n; i++) {
        if (arr[i] < second_small && arr[i] != small ) {
            second_small = arr[i];
        }

        if (arr[i]> second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }

    
    cout << "Second Largest Element is :" << second_large << endl;
    cout << "Second smallest Element is :" << second_small << endl;
}

// Optimal Approach

void getElementsbyOptimalSmall(int arr[], int n) {

    if (n<=2) {
        cout << "-1";
        return;
    }

    int small = INT_MAX;
    int second_small = INT_MAX;

    for (int i=0; i<n; i++) {
        if (arr[i] <small) {
            second_small = small;
            small = arr[i];
        } else if ( arr[i]< second_small && arr[i] != small) {
            second_small = arr[i];
        }  
    }

    cout << "Second Small Element is:" << second_small;
}

void getElementsbyOptimalLarge(int arr[], int n) {

    if (n<=2) {
        cout << "-1";
        return;
    }

    int large = INT_MIN;
    int second_large = INT_MIN;

    for (int i=0; i<n; i++) {
        if (arr[i] >large) {
            second_large = large;
            large = arr[i];
        } else if ( arr[i]> second_large && arr[i] !=  large) {
            second_large = arr[i];
        }      
}
cout << "Second Large Element is:" << second_large;

}

int main() {
    int arr[] = {12,4,134,133,11,56,1111};
    int n = sizeof(arr)/sizeof(arr[0]);

    getElementsbyOptimalSmall(arr,n);
    getElementsbyBruteForce(arr,n);
    getElementsbyBetter(arr,n);

    return 0;
}

