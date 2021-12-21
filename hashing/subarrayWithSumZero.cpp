#include "bits/stdc++.h"
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){
    int n; cin>>n;

    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }

    int prefixsum =0;
    map<int,int> cnt;
    rep(i,0,n) {
        prefixsum += a[i];
        cnt[prefixsum]++;

    }

    int ans =0;
    map<int,int> :: iterator it;

    for(it = cnt.begin() ; it != cnt.end() ; it++) {
        int c = it->second;
        ans += (c*(c-1))/2;
        //this is for single element subarray of zero;
        if(it->first == 0) {
            ans += it->second;
        }

    }

    cout<<ans<<endl ;



}