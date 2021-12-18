#include "bits/stdc++.h"


using namespace std;

bool isFeasible(int arr[] , int n , int m, int mid){
    int noOfStd=1,sum =0;
    for(int i=0;i<n;i++){
        if(arr[i] > mid){
            return false;
        }
        if(sum+arr[i] > mid){
            //this is the situation where the one student cant take 
            //no of pages greater than minimum . so we increase the 
            // count of student by one ;
            noOfStd++;
            //  we are alresdy 1 positon ahed in the  loop . 
            // so sum for next sumdent will be arr[i];
            sum= arr[i];

            if(noOfStd > m){
                return false;
            }
            

        }
        else {
            sum += arr[i];
        }

    }
    return true;
}



int allocation (int arr[],int n, int m) {
    int sum =0 ;
    if(n<m){
        return -1;

    }

    for(int i=0;i<n;i++){
        sum += arr[i];   
    }

    int start= 0, end = sum , ans = INT_MAX;
    while(start <= end ) {
        int mid = (start+end)/2;
        if(isFeasible(arr,n,m,mid)){
            ans = min (ans,mid);
            end = mid -1;

        }
        else {
            start = mid+1;
        }
    }
    return  ans ;
}



int main( ) {

    int arr [ ] = {12,34,67,90};
    int n = 4;
    int m = 2;
   cout<< allocation(arr,n,m);
}

// bool isFeasible(int arr[], int n, int m , int mid){
//     int NoofSTD=1, sum=0;
//     for(int i=0;i<mid;i++){
//         if(arr[i]>mid){
//             return false;
//         }
//         if(sum+arr[i] > mid){
//             NoofSTD++;
//             sum= arr[i];
//             if(NoofSTD > m) {
//                 return false;
//             }
//         }
//         else{
//             sum += arr[i];
//         }
//     }
//     return true;
// }

// int allocation ( int arr[] , int n , int m) {
    
//     int sum =0;
//     if(n<m) {
//         return -1;
//     }
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }

//     int start=0;
//     int end = sum;
//     int ans = 0;
//     while (start<=end)
//     {
//         int mid= (start+end)/2;

//         if(isFeasible(arr,n,m,mid)){
//             ans = min(ans,mid);
//             end=mid-1;
//         }
//         else{
//             start= mid+1;
//         }
//     }
    
// return ans;

// }