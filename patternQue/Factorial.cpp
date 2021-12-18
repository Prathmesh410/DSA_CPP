// this is from 1 to n
//
//  #include<iostream>
//  #include<cmath>
// using namespace std;

// int fact(int n){
//    int factorial=1;
//    for(int i=2;i<=n;i++){
//        factorial*=i;
//    }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans= fact(n);
//     cout<<ans<<endl;
//     return 0;

// }


 #include<iostream>
 #include<cmath>
using namespace std;

int fact(int n){
   int factorial=1;
   for(int i=n;i>=1;i--){
       factorial*=i;
   }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    int ans= fact(n);
    cout<<ans<<endl;
    return 0;

}