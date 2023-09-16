#include<bits/stdc++.h>
using namespace std;

// T.c : O(n*2^n)
void powerSet(string s){
    int n = s.length();
    int pSize = (1<<n);
    for(int i=0;i<pSize;i++){
        for(int j=0;j<n;j++){
            if(i&(i<<j)!=0){
                cout<<s[j];
            } 
        }
        cout<<endl;
    }
}