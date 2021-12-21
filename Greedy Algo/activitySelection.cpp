#include "bits/stdc++.h"

#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main() {
    int n; cin>> n;

    vector<vector<int>> a(n);

    rep(i,0,n) {
        int start;int end;
        cin>>start>>end;
        a.push_back({start,end});

    }

    sort(a.begin() , a.end() , [&](vector<int> &a, vector<int> &b){
        a[1] < b[1] ;
    }); 
    int take = 1;

    int end = a[0][1];

    rep(i,1,n) {
        if(a[i][0] >=end){
            take++;
            end=a[0][1];
        }
    }
    cout<<take<<endl;

}