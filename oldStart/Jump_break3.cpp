#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"number is not prime number";
            break;
        }
        
        
    } 
    if(i==n){
          cout<<"Number is Prime Number.\n";      
        }
       
    return 0;
}
