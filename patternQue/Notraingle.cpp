
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//my method
// #include<iostream>
// using namespace std;

// int main(){
//     int row,count=1;
//     cin>>row;
//     for(int i=1 ; i<=row;i++){

//         for(int j = 1; j<=row;j++){
//             if(j<=row-i){
//                 cout << " ";

//             }else{
//                 cout<<count<<" ";
//                 count++;
//             }
//         }
//             count=1;
//         cout<<endl;
//     }


// }
