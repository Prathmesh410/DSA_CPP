#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int fib (int n){
    if(n==0 || n==1){
        return n;
    }
    
   int prevFib= fib(n-1)+fib(n-2);
   return prevFib;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);

}