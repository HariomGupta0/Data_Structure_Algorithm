class Solution {
public:
    int singleNumber(vector<int>& arr) {
    int n = arr.size();
    int maxi = 0;
    //1. find the the largest array element
    for (int i=0; i<n;i++) {
         maxi = max(maxi,arr[i]);
    }
    //2. Create a hash array of that length 
    vector <int> hash(maxi+1, 0);
    //Interstion of elements in array
    for (int i=0 ;i<n;i++) {
        hash[arr[i]]++;
    }
    //3. Iterate that array and find the element with occurence of 1
    for (int i=0; i<n;i++) {
        if (hash[arr[i]] == 1) return arr[i];
    }
    
    return -1;
    }

};