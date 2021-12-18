#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout <<"Number of elements   ";
    cin>>n;

    int arr[n];

    for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
    int max_no=INT_MIN;
    int min_no=INT_MAX;

    for (int i=0;i<n;i++){
    max_no=max(max_no,arr[i]);
    min_no=min(min_no,arr[i]);
    }

    for (int i=0;i<n;i++)
    {
    cout<<arr[i]<<"  ";
    }
    cout<<max_no<<"   "<<min_no;
    return 0;
}
