#include<bits/stdc++.h>
using namespace std;
// Naive solution :https://practice.geeksforgeeks.org/problems/maximum-and-value-1587115620/1
int maxAND (int arr[], int N)
{
        int maxi = 0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                int t = arr[i]&arr[j];
                maxi = max(maxi,t);
            }
        }
        return maxi;
}