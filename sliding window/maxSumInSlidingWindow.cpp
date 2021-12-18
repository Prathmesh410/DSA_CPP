#include "bits/stdc++.h"

using namespace std;

void slidingWindow(int arr[], int n, int k , int x){
    int sum=0,ans=0;
    for( int i =0; i < k; i++ ){
        sum += arr[i];
    }
    if(sum<x){
        ans= sum;
    }

    for( int i= k; i< n; i++) {
        sum = sum - arr[i-k];
        sum = sum + arr[i];
        if( sum < x )
        {
            ans = max(sum , ans);
            } 

        
    }

cout<<ans<< " is the max sum possible with the limit of x and k amount of numbers";

}




// void sliding(int arr[] , int n , int k, int x){
//     int sum =0, ans= 0;
//     for( int i=0;i<k;i++){
//         sum += arr[i];
//     }

//     if( sum< x){
//         ans = sum;
//     }
//     //the second loop must be start from l
//     for( int i=k; i< n; i++){
//         sum -= arr[i-k];
//         sum += arr[i];

//         if( sum < x){
//             ans = max(ans, sum);
//         }

//     }
//     cout<<ans;

// }

int main() {
    int arr[ ] = {7,5,4,6,8,9};
    int k =3,x=20,n=6;
    slidingWindow(arr,n,k,x);
}


