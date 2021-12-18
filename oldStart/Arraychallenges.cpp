#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int mx= INT_MIN;
      int n;
    cout <<"Number of elements   ";
    cin>>n;
    cout<<"Elements in the array= ";

    int arr[n];

    for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
    for (int i=0;i<n;i++) {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }

    
    
      return 0;
}
