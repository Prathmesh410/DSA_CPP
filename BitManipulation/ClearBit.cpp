#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int clearBit(int n,int pos){
    int mask= ~(1<<pos);
    return n & mask;
}

int updateBit(int n,int pos ,int value){
    int mask = ~(1<<pos);
    n= n & mask;
    return( n | (value<<pos));
}
int main () {
    cout<<clearBit(5,2)<<endl;
    
    cout<<updateBit(5,1,1)<<endl;
    
    return 0;

}