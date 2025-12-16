#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <limits.h>
using namespace std;


//Problem Statement: Given an array of integers arr[] and an integer target.
//1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.
//2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

//Brute Force 
void SelfmadeBruteForce(int arr[], int n, int target) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if ( arr[i] + arr[j] == target) {
                    cout << "Yes" <<endl;
                    cout << arr[i] << "&" << arr[j]; 
            }
        }
    }
    cout << "No";

}

// Striver Solution
// It is class(Solution class) 
class Solution {
public:

    string twoSumExists(vector<int>& arr, int target) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    return "YES";
                }
            }
        }
        return "NO";
    }

    vector<int> twoSumIndices(vector<int>& arr, int target) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};

class Solution2 {
    public:
        string twoSumExists(vector<int>& arr, int target) {
            unordered_map<int,int> mp; //this is like dictornay
            int n = arr.size();

            for(int i =0;i<n; i++) {
                int complement = target - arr[i];
                if (mp.find(complement) != mp.end() ) {
                    return "Yes";
                }

                mp[arr[i]] =i;
            } 
            return "No";
        }
        vector<int> twoSumIndices(vector<int>& arr, int target) {
            unordered_map<int,int> mp;
            int n = arr.size();

            for (int i=0; i<n; i++) {
                int compelement = target - arr[i];

                if(mp.find(compelement) != mp.end()) {
                    return {mp[compelement],i};
                }
            mp[arr[i]] =i;
        }
        return {-1,1};
    
    }
};

//Optimal Approach

class Solution3 {
    public:
        string twoSumExists( vector<int>& arr, int target) {
            int n = arr.size();
            //Declaration of vector
            vector<pair<int,int>> numsWithIndex;
            // Inserting elements of array in vector 
            for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({arr[i], i});

            //Sorting the vector to apply 2 pointer
            sort(numsWithIndex.begin(), numsWithIndex.end());
            
            // 2 pointer appraoch begin here 
            int left = 0 , right = n-1;
            while (left<right) {
                int sum = numsWithIndex[left].first + numsWithIndex[right].first ;
                if (sum == target) {
                    return "YES";
                } else if ( sum<target)// target is bigger , we need to move left pointer so that we can get bigger values , which means bigger sum
                {
                    left++;
                } else { // vice versa here
                    right--;
                }
                
            }
        }
        }

        vector<int> twoSumIndices(vector<int> arr, int target) {
            int n = arr.size();
            vector<pair<int, int>> numsWithIndex;
            for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({arr[i], i});
                 }
            sort(numsWithIndex.begin(), numsWithIndex.end());

            int left = 0, right = n - 1;
            while (left < right) {
                int sum = numsWithIndex[left].first + numsWithIndex[right].first;
                    if (sum == target) {
                        // Return original indices
                    return {numsWithIndex[left].second, numsWithIndex[right].second};
                } else if (sum < target) {
                    left++;
                } else {
                right--;
                }
        }
        return {-1, -1};  // No pair found
    }
};


int main() {
    vector<int> arr1 = {2,6,5,8,11};
    int n  = sizeof(arr1)/sizeof(arr1[0]);
    int target = 14;

    Solution3 sol;
    cout << sol.twoSumExists(arr1,target);
    //Storing the value of into vector and then retrive it
    vector<int> res = sol.twoSumIndices(arr1,target);
    cout<< "[" << res[0] << "," << res[1] << "]\n";
}