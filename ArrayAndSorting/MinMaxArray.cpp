#include <iostream>
#include<math.h>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    // int array[5]={10,20,30,40};
    // cout<<array[3];

    int n;
    cout<<"size of array"<<endl;
    cin>>n;

    int arr[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
        
    }
    cout<<maxNo<<" "<<minNo<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}