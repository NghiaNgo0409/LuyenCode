#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "Uoc so le lon nhat cua " << n << " : " << endl; 
    int max = 1;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i % 2 == 1 && i > max)
        {
            max = i;
        }
    }
    cout << max << endl;
}