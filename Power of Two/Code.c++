#include<bits/stdc++.h>
using namespace std;


// Naive soltuion : T.C : O(logn)
int powerOfTwo(int n){
    if(n==0) return 0;
    while(n!=1){
        if(n%2!=0){
            return 0;
        }
        n = n/2;
    }
    return 1;
}

// Efficent soltuion : T.C : O(1)
// If count set bits is 1 return true else return false
int powerOfTwo1(int n){
    if(n==0) return 0;
    return ((n&(n-1))==0);
}
int main(){
    int n=4;
    return powerOfTwo(n);
}