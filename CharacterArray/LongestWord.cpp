#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    //clear the catch
    cin.ignore();

    char a[n+1];
    //get include the space as well.which not done by terminal
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int curr=0;
    int mx=0;
    while (1)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(curr>mx){
                mx=curr;
            }
            curr=0;
        }
        else
        curr++;
    
        if(a[i]=='\0')
        break;
        i++;
        
    }
    
   

cout<<mx<<endl;
    return 0;
}