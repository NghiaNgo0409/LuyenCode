#include <iostream>
using namespace std;
int main()
{
    int n;
    int volume = 1;
    cin >> n;
    cout << "Tich tat ca uoc so le cua " << n << " : " << endl; 
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            volume *= i;
        }
    }
    cout << volume << endl;
}