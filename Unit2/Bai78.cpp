#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "Cac uoc so cua so " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}