// #include "bits/stdc++.h"
// using namespace std;
// int main() {
//     int n;cin>>n;
//     int target;cin>>target;
//     vector<int> a(n);
//     for( auto &i : a)
//          cin>>i;
//     bool found = false;
//     sort(a.begin(),a.end());
//     for(int i=0;i<n;i++){
//         int lo=i+1 , hi = n-1;
//         while (lo<hi)
//         {
//             int current =a[i] + a[lo]+ a[hi];
//             if(current == target){
//                 found=true;
               
//             }
//            if(current<target){
//                 lo++;
//             }
//             else{
//                 hi--;
//             }

//         }
        
//     }
//     if(found)
//     {cout<<"true";}
//     else{
//         cout<<"false";
//     }
// }



#include "bits/stdc++.h"

using namespace std;

int main ( ) {
    int n;cin>>n;
    int t;cin>>t;
    vector<int> a(n);
    for(auto &i :a)
        cin>>i;

    bool found=false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int li=i+1 ; int hi =n-1;
        while (li<hi)
        {
            int curr = a[i] + a[li] + a[hi];
            if(curr==t){
                found=true;

            };
            if(curr<t){
                li++;
            }
            else{
                hi--;
            }
        }
        
    }
    if(found){
        cout<<"r";

    }
    else{
        cout<<"n";
    }
}