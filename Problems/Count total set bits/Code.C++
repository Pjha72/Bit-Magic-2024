#include<bits/stdc++.h>
using namespace std;

// n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int largestPowerOf2(int n){
        int cnt = 0;
        while(n>1){
            cnt++;
            n = n>>1;
        }
        return cnt;
    }
    int countSetBits(int n)
    {
        if(n==0) return 0;
        int x = largestPowerOf2(n);
        return pow(2,x-1)*x+(n-pow(2,x)+1)+countSetBits(n-pow(2,x));
    }