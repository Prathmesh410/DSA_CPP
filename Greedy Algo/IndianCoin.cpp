#include "bits/stdc++.h"
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main() {
    int n;cin>>n;

    vi a(n);

    rep(i,0,n) {
        cin>>a[i];
    }
    sort(a.begin() , a.end() , greater<int> ());

    int x; cin>>x;

    int ans=0;


    rep(i,0,n) {
        ans += x/a[i];
        x -= x/a[i] *a[i];
    }
    cout<<ans<<endl;


}