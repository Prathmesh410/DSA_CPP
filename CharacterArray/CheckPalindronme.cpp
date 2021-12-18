#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    char a[n+1];
    cin>>a;
    cout<<a;
    bool flag =1;
    for(int i =0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"  is palindrome";
    }else{
        cout<<" is no palindrome";
    }
}
