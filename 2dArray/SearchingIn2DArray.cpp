#include <iostream>

 using namespace std;

 int main() { 
     int n,m;
    cin>>n>>m;
    int a[n][m];
     for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>a[i][j];
        }
    }
   
    
    cout<<"enter the no you want to find ";
    int k;
    cin>>k;
    bool flag= false;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == k){
                cout<<i<<' '<<j<<endl;
                flag=true;
            }
        }
    }
if(flag==true){
    cout<<"no is present";
}
else{
    cout<<" NO is not  Present";
}
return 0;
 }