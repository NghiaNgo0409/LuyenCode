#include <iostream> 
using namespace std;
void InputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void OutputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[5];
    InputArray(a, 5);
    OutputArray(a, 5);
}