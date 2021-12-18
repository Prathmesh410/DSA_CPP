#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int countP (int s,int e){
    if(s==e){
        return 1;

    }
    if(s>e){
        return 0;

    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countP(s+i,e);
    }
    return count;
}
int main(){
    cout<<countP(0,3);
    return 0;

}
