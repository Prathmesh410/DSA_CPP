#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Total budget   ";
    cin>>x;
    if(x>7000)
    {
        cout<<"Bye skins and Brodband.\n";

    }
    else if (x<7000 && x>4000)
    {
        cout<<"Bye broadBand only.\n";

    }
    if (x<4000)
    {
        cout<<"Kuch mat kharid.\n";
    }
    
    return 0;
}
