#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
int unique1(int arr[],int n)
{
    int xorsum =0;
    for(int i =0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
};
int main(){
    int arr[]={1,2,3,4,3,2,1};
    cout<<unique1(arr,7)<<endl;

    return 0;

} 