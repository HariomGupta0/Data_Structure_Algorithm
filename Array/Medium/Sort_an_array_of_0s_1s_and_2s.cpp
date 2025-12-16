#include <iostream>
#include <vector>
using namespace std;

//Brute Force Approach
class Solution {
public:
    int count0 = 0,count1 = 0, count2 = 0;
    void setZerosOnesTwos(vector<int> &nums) {
        
            for(int i=0;i<nums.size();i++) {
                if (nums[i] == 0) count0++;
                if (nums[i] == 1) count1++;
                if (nums[i] == 2) count2++;
            }

            int index = 0;
            
            while(count0--){
                nums[index++] = 0;
            }
            while(count1--){
                nums[index++] = 1;
            }
            while(count2--){
                nums[index++] = 2;
            }

    }
};

// Optimal Approach
class Solution2 {
    public:
    void SetZerosOnesTwos(vector<int> &nums) {
        int low = 0, mid =0 , high = nums.size() - 1;

        while (mid<=high) {
            if(nums[mid] == 0) {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid == 1]) {
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }

        }
    }
};

int main( ) {
    vector<int> arr1 = {1,0,0,2,0,1,0,2};
    Solution2 sol;
    sol.SetZerosOnesTwos(arr1);

    for (int x: arr1) {
        cout << x << " ";
    }

    return 0;
}