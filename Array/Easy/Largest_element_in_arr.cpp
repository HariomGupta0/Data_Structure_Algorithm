#include <iostream>
using namespace std;

int main() {
    int arr[6] ={2,4,7,8,11,3};
    int n = sizeof(arr) / sizeof(arr[0]);
  	int max =  arr[0];
    for (int i=0;i<n;i++) {
      if (arr[i] > max) {
          max = arr[i];
      }
    }
    
  	cout << max ;
    return 0;
}
