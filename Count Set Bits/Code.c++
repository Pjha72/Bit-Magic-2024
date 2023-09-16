#include<bits/stdc++.h>
using namespace std;

// Naive Solution : O(d)
int countSetBits(int n){
    int cnt = 0;
    while(n>0){
        // cnt+=n&1;
        if(n%2!=0){
            cnt++;
        }
        n = n/2;
    }
    return cnt;
}

// Brian Kernighan’s Algorithm : O(set bits)
// Idea : Traverse through only the set bits : T.C : O(set bits)
int countSetBits1(int n){
    int cnt = 0;
    while(n>0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

// Lookup Table Method : O(1)
// Idea : Create a lookup table of size 256 and store the count of set bits for each number from 0 to 255
// OR The idea is to set count bits in O(1) time with some preprocessing involved.

// Assumption : We have 32 bits number
// 1. Precompute counts for 8 bit numbers(0 to 255)
/*
    tbl[0] = 0;
    for i = 1 to 255
        tbl[i] = tbl[i&(i-1)]+1
    
    Now to count set bits in a given no N,
    n=13 : 0..00..00..00001101

    How do you count set bits in the 4 segments individually using tbl[];
*/
// T.C : O(1)
int tbl[256];
void initialize(){
    tbl[0] =0;
    for(int i=1;i<256;i++){
        tbl[i] = tbl[i&(i-1)]+1;
    }
}

int countSetBits(int n){
    return tbl[n&255]+tbl[(n>>8)&255]+tbl[(n>>16)&255]+tbl[(n>>24)];
}