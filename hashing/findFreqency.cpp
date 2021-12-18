#include "bits/stdc++.h"
using namespace std;





int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> frq;
    for(int i=0;i<n;i++){
        frq[a[i]]++;
    }
    map<int,int> :: iterator it;
    for(it=frq.begin();it!=frq.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;

}


