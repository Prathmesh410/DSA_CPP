 #include<iostream>
 #include<cmath>
using namespace std;

bool isPrime(int num){
    
for( int i=2;i<=sqrt(num);i++){
    if(num%i==0){
        return false;
        break;
    }
}
return true;
}



int main(){
int a,b;
cin>>a>>b;
for (int i=a;i<=b;i++){
    if(isPrime(i)){
        cout<<i<<" is a Prime Number"<<endl;
    }
}

return 0;
}
