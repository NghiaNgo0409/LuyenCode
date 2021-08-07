#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "Tat ca uoc so le cua " << n << " : " << endl; 
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}