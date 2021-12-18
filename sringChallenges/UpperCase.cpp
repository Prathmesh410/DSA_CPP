#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str= "asdfsdf";
    //conver into uppercase
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -=32;
        } 
    }

    cout<<str<<endl;

    //lower case
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] +=32;
        } 
    }

    cout<<str<<endl;

    //direct function
    //transform(start,end,where to start, :: toupper)
    transform(str.begin(),str.end(), str.begin(),:: toupper);

cout<<str<<endl;

transform(str.begin(),str.end(), str.begin(),:: tolower);
cout<<str<<endl;
    

    return 0;
}