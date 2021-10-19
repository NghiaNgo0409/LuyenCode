#include <iostream>
using namespace std;
int main()
{
    int a[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int x; cin >> x;
    int pos; cin >> pos;
    for(int i = n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = x;
    n++;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}