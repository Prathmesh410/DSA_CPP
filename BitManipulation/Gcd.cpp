// //a gsc is calculated by euclid algorithm
// gcd is nothing but the product of common prime factorials of two numbers
// eg 24=2 *2 *2*3
// 42=2*3*7
// gcs= 2*3 =6
// if subtract those numbers until we hit zero then the last number is our gcd
// 42 -24 =18
// 24 -18 =6
// 18 -6 =12
// 12 -6 =6
// 6 -6 =0
// hence 6
// or we can do % also 
// 42%24=18
// 24%18=6
// 18%6=0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int a,int b){
    while (b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;

    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;

}


