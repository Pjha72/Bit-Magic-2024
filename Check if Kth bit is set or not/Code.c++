#include<bits/stdc++.h>
using namespace std;

/*
1. How do you check the last bit of a number is set or not ?
   if((n&1)!=0) return Yes;
   else return No;
2. How do you check the kth bits
    we mainly need to do bitwise and with number with only kth bit set 00..010..00
    if((n&(1<<k))!=0) return Yes;
    else return No;
*/
// Naive soltuion  : O(k)
void isKthBitSet(int n, int k){
    int x = 1;
    for(int i=0;i<k-1;i++){
        x = x*2;
    }
    if((n&x)!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
// Efficent soltuion of Naive soln 1
void isKthBitSet1(int n, int k){
    if(n&(1<<(k-1))) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
// Alternate Naive solution : Reduce n to [n/2^k-1]
void isKthBitSet2(int n, int k){
    for(int i=0;i<k-1;i++){
        n = n/2;

        if(n&1!=0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
// Efficent solution of Naive soln 2
void isKthBitSet3(int n, int k){
    if(n>>(k-1)&1!=0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    int n = 5;
    int k = 1;

}