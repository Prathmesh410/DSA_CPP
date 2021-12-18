#include<iostream>
using namespace std;

int main(){
    int row,count=1;
    cout<<"no";
    cin>>row;
    for(int i=1 ; i<=row;i++){

        for(int j = 1;j<=row+1-i;j++){
          cout<<j<<" ";
        }
        cout<<endl;
    }



}
