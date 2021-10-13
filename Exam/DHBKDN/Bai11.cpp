#include <iostream>
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
int Sum(int** arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
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
    cout << "Tong cac phan tu trong mang: ";
    cout << Sum(arr, n);
}