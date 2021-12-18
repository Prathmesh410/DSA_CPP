#include "bits/stdc++.h"

using namespace std;

int findPeak(int arr[], int start, int end,int n){
    if(start> end) {
        return -1;
    }
    //here we are taking a "end - start " value coz sometimes
    // the given numbers are quite big and hence the addition 
    //extend the integer limit . so insted of adding 
    // check the proof on internet
    int mid = start +(end - start)/2;
    //here we checking the extreame condition coz if mid ==0 the we cant get mid-1;
    if((mid==0 || arr[mid]>=arr[mid-1]) && (mid == n-1 || arr[mid] >=arr[mid+1]) ){
        return mid;
    }
    else if(mid>0 &&  arr[mid] < arr[mid-1]){
        return findPeak(arr,start,mid-1,n);
    }
    else{
        return findPeak (arr, mid+1,end, n);
    }
}


// int findPeak2(int arr[] , int start, int end, int n){
//     int mid = start + (end - start)/2;

//     if((mid==0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid])) {
//         return mid;
//     }

//     else if(mid > 0 && arr[mid-1] > arr[mid]){
//         return findPeak2(arr,start, mid-1, n);
//     }
//     else{
//          return findPeak2(arr, mid+1, end, n );
//     }

// }
int main(){
    int arr[] = {0,6,8,5,7,9};
    int n =6;
    cout<<findPeak(arr,0,n-1,n);
    return 0;
}

