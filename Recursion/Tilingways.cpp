#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int tilingway(int n ){
     if(n==0){
         return 0;
     }
     if(n==1){
         return 1;
     }
     return tilingway(n-1) + tilingway(n-2);
}
int main(){

    cout<<tilingway(4);
    return 0;
}