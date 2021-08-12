#include <iostream> 
using namespace std;
void InputArray(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void OutputArray(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    double a[5];
    InputArray(a, 5);
    OutputArray(a, 5);
}