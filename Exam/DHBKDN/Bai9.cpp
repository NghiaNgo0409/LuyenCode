#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100
void Input(int** arr, int n)
{
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void Output(int** arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool isSquareNumber(int n)
{
    int x = sqrt(n);
    if(x * x == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n; cin >> n;
    int** arr = new int* [n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    Input(arr, n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(isSquareNumber(arr[i][j]))
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}