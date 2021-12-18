#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"enter th value\n";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    
    case 'b':
        cout<<"yo"<<endl;
        break;

        case 'c':
        cout<<"bol"<<endl;
        break;

        case 'd':
        cout<<"kay re"<<endl;
        break;

        case 'e':
        cout<<"hmm"<<endl;
        break;
    default:
        cout<<"bas zhal atta."<<endl;
        break;
    }
    return 0;
}
