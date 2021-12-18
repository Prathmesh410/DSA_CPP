#include <iostream>

 using namespace std;

 int main() { 
     cout<<"only square matrix : ";
     int n,m;
    cin>>n>>m;
    int a[n][m];
     for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){//notice j starts from i coz we want only upper side to be fliped
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }

    }
 for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
 }