#include "bits/stdc++.h"
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main() {
    int n,k; cin>>n>>k;

    vi a(n);

    rep(i,0,n) {
        cin>> a[i];
    }

    map<int, int> m;

    rep(i,0,n) {
        int size = m.size();
        if(m[a[i]] == 0 &&  size== k) 
            break;
        
        m[a[i]]++;
    }

    vii ans;
    
    map <int,int> :: iterator it;

    for(it =m.begin();it != m.end();it++){
        if(it->second != 0){
            pii p;
            p.ff = it->ss;
            p.ss = it->ff;
            ans.push_back(p);
        }

    }
    sort(ans.begin() , ans.end() , greater<pii>() );

    vii :: iterator it1;

    for(it1 = ans.begin() ; it1 != ans.end() ; it1++) {
        cout<<it1->ss << " " <<it1->ff <<endl;
    }



}
