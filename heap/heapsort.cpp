#include "bits/stdc++.h"

using namespace std;

void heapify(int arr[], int n, int i){
   int start=i;
   int l = 2*i +1;
   int r = 2*i + 2;

   if(l<n && arr[l]>arr[start]){
      start=l;
   }
   if(r<n && arr[r] > arr[start]){
      start=r;
   }

   if(start != i){
      swap(arr[start], arr[i]);
      
      heapify(arr,n,start);
   }
}


void heapsort(int arr[],int n){
   for(int i=(n/2)-1;i>=0;i--){
      heapify(arr,n,i);
   }

   for(int i=n-1;i>=0;i--){
      swap(arr[0],arr[i]);

      heapify(arr,i,0);
   }
  
}
void printA(int arr[],int n){
   for(int i =0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
   int arr[] ={12,11,13,5,6,7};{
      int n= 6;
      heapsort(arr,n);
    printA(arr,n);
   }
}
  
// void heapify(int arr[],int n,int i){
//    int start=i;
//    int l= 2*i+1;
//    int r= 2*i+2;
//    if(l<n && arr[l]>arr[start]){
//       start=l;
//    }
//    if(r<n && arr[r] > arr[start]){
//       start=r;
//    }
//    if(start != i){
//       swap(arr[i],arr[start]);
//       heapify(arr,n,start)
//    }
// }

// void heapsort (int arr[], int n){
//    for(int i=(n/2)-1;i>=0;i--){
//       heapify(arr,n,i);
//    }

//    for(int i=n-1;i>=0;i--){
//       swap(arr[0],arr[i]);
//       heapify(arr,i,0);
//    }
// }

