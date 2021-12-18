#include<iostream>
using namespace std;
int binary_1(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid= (s+e)/2;

        if(arr[mid]==key)
        {
            return mid;

        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
    }
    return -1;
}
int main()
{
     int n;
    cout <<"Number of elements   ";
    cin>>n;
    cout<<"Elements in the array= ";

    int arr[n];

    for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
int key;
cout<<"enter the key to find";
cin>>key;

cout<<binary_1(arr,n,key);
    return 0;
}
