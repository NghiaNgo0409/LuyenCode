#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0, i = 0;
    while (sum + i < n)
    {
        i++;
        sum += i;
    }
    cout << i;
}