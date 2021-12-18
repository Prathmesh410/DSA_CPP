#include "bits/stdc++.h"

using namespace std;


int searchInRotatedArray (int arr[],int k, int left, int right){
    if(left > right){
        return -1;
    }
    int mid = (left+right)/2;
    if(arr[mid] == k){
        return mid;
    }
    if(arr[left] <= arr[mid]){
        if(arr[left]<= k && arr[mid] >= k){
            return searchInRotatedArray(arr,k,left,mid-1);
        }
            return searchInRotatedArray(arr,k,mid+1,right);
    }
    if(arr[right]>= k and arr[mid] <= k){
        return searchInRotatedArray(arr,k,mid+1,right);
    }
        return searchInRotatedArray(arr,k,left,mid-1);

}


int main(){
    int arr[] = {6,7,8,9,10,1,2,5};
    int n=8;
    int key =1;
    int i = searchInRotatedArray(arr,key,0,n-1);
    if(i == -1){
        cout<<" key not ";
    }
    else{
        cout<<"key is present at "<<i<<endl;
    }


}