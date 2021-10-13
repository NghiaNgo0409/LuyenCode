#include <iostream>
using namespace std;
template<typename T> T Max(T a[], int n)
{
    T max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n; cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << Max(a, n);
}