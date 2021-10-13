#include <iostream>
#include <math.h>
using namespace std;
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
bool isPrime(int n)
{
    if(n < 2)
    {   
        return false;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int n; cin >> n;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    Input(arr, n);
    Output(arr, n);
    cout << "In ra cac so nguyen to: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(isPrime(arr[i][j]))
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}