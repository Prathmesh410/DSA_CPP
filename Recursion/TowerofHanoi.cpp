#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void towerofHanoi(int n,char src, char dest,char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    //here we have to print the instruction. and not to move the 
    //the actual disk from the tower.
    cout<<n<<" move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}

int main(){
    towerofHanoi(3,'A','B','C');

}
