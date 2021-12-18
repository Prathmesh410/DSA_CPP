#include "bits/stdc++.h"
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;





int main() {

   int n;int k;
   cin>>n>>k;

vector<int> a(n);
rep(i,0,n)
{
    cin>>a[i];
}

priority_queue<int,vector<int>> pq;

rep(i,0,n){
    pq.push(a[i]);

}
int sum=0;
int count=0;
while (!pq.empty())
{
    sum += pq.top();
    pq.pop();
    count++;
    if(sum >= k){
        break;
        cout<<"this is";
    }
}

if(sum<k){
    cout<<"No such sub";
}
else{
    cout<<count;
}

}