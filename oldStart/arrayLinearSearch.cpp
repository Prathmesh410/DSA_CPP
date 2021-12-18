#include<iostream>
using namespace std;

int linerSearch(int n,int arr[],int k)
{

    for (int i=0;i<n;i++)
    {
       if(arr[i]==k)
       {
           return 1;
       } 
    }
    
    return -1;

}


 int main()
{
    int n;
    int k;
    cout <<"Number of elements   "<<"key to find";
    cin>>n>>k;

    int arr[n];

    for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
    
    cout<<linerSearch(n,arr,k);
    return 0;
}
