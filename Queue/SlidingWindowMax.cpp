#include <iostream>
#include<deque>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main( ){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
        


    multiset<int,greater<int>> s;
    vector<int> ans;  
    for(int i=0;i<k;i++){
        s.insert(a[i]);
    } //to push bigger value of s in ans 
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){//this loop is for next windows
        s.erase(s.lower_bound(a[i-k]));//we removing the the inserted no in ans from s and adding a new element in the multiset. 
        s.insert(a[i]);
        ans.push_back(*s.begin());

    }
    for(auto i :ans){
        cout<<i<<" ";
    }
    }