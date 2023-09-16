#include<bits/stdc++.h>
using namespace std;

// Naive soltuion : T.C : O(n^2) => Count the number of occurences for all numbers through a nested loop.
int findOddOccuring(vector<int>&nums, int n){
    for(int i=0;i<nums.size();i++){
        int cnt = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                cnt++;
            }

        }
        if(cnt%2!=0){
            return nums[i];
        }
    }
    return -1;
}

// Efficient Approach : Use of bitwise XOR operator  : O(n)
int findOddOccuring(vector<int>&nums, int n){
    int ans = 0;
    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }
    return ans;
}

// Interesting properties of XOR operation
// 1. x^0 = xor
// 2. x^y = y^x
// 3. x^(y^z) = (x^y)^z
// 4. x^x = 0