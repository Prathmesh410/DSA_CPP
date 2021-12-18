#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverse (string str){
    if(str.length()==0){
        return;
    }
    string ros = str.substr(1);
    reverse(ros);
    cout<<str[0];
}
 int main(){
     
     
    string str="binod";
    reverse(str);
     return 0;

 }