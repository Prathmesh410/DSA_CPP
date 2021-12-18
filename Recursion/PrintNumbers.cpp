#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    //before the recussion n will be printed
    cout << n << endl;
    dec(n - 1);
}
void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    //first the recurssion will happens and once the base condition hits it will start returning the values
    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    dec(n);
    inc(n);
    return 0;
}