#include<iostream>
using namespace std;

int main()
{
    int pocket=300;
    for(int date=0;date<=30;date++){
        if(date%2==0){
            cout<<"odd day.anghol nay keli.\n";
            continue;
        }
        if(pocket==100){
            break;
        }
        cout<<"Go out today\n";
        pocket=pocket-100;
    }
    return 0;
}


