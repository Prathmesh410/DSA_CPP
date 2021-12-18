#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (x == n - 1 && y == n - 1)
    { //base
        solArr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {

        solArr[x][y] = 1;
        if (ratMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; //backtrack
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n]; //heap or dynamic memory allocation
    for (int i = 0; i < n; i++)
    { //allocate the memory
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **solArr = new int *[n]; //heap or dynamic memory allocation
    for (int i = 0; i < n; i++)
    { //allocate the memory
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    if (ratMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }cout<<endl;
        }
    }
    return 0;
}