#include<bits/stdc++.h>
using namespace std;

// Naive solution : T.C : O(n^2)
// Count the number of occurences for all numbers through a nested loop.
vector<int> findTwoOddOccuring(vector<int>&nums, int n){
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int cnt = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt%2!=0){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

// Efficient Approach : Use of bitwise XOR operator  : O(n)
// 1. find the xor of all the numbers
// 2. 
vector<int> findTwoOddOccuring(vector<int>&nums){
    int ans = 0;
    for(int i=0;i<nums.size();i++){
        ans^=nums[i];
    }
    int k = (ans&(~(ans-1)));
    int res1=0,res2=0;
    for(int i=0;i<nums.size();i++){
        if((nums[i]&k)!=0){
            res1 = res1^nums[i];
        }
        else{
            res2 = res2^nums[i];
        }
    }
    return {res1,res2};
}