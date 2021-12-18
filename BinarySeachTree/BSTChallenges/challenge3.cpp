#include "bits/stdc++.h"

using namespace std;

// bool feasibility(int arr[],int n, int m, int mid){
//     int painter=1;
// }



// int painter(int arr[], int n, int m ){
//     int boardSum =0;  
//     int k =0;
//     if(n<m){
//         return 0;
//     }

//     for(int i=0; i< n; i++) {
//         k= max(k,arr[i]);
//         boardSum =+ arr[i];
//     }
//     // here the low 
     
//     int start =k, end = boardSum, ans = 0;

//     while (start<= end)
//     {
//         int mid = (start+end)/2;

//         if(feasibility(arr,n,m,mid)){
//             ans = min(ans,mid);
//             end= mid-1;

//         }
//         else{
//             start= mid +1;

//         }        


//     }
    

//     return ans;

// }


// int main( ){

// }


int isFeasible (int board[],int n, int mid){
    int painters=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=board[i];
        if(sum>mid){
            sum=board[i];
            painters++;
        }
    }
    return painters;
}


int paninter (int board[], int n, int m){

    int sum, k=0;
    for(int i=0; i< n; i++){
        k=max(k,board[i]);
        sum+= board[i];
    }

    int start =k;
    int end = sum;
    int ans =0;
    while (start<end)
    {
        int mid=(start+end)/2;
        int painters= isFeasible(board,n,mid);
        if(painters<=m){
            end=mid;
        }
        else{
            start=mid+ 1;
        }
    }
    return start;
    
}

int main() {
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    cout<<paninter(arr,n,m);
}

