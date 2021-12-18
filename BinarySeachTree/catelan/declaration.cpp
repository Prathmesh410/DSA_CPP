#include "bits/stdc++.h"

using namespace std;

int catelan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catelan(i) * catelan(n-i-1);
    }
    return res;

}  

int main ( ) {  
    int n;cin>>n;
    for(int i=0;i<=n;i++){
        cout<<catelan(i)<<" ";
    }

}