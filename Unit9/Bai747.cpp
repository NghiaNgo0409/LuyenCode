#include <iostream>
using namespace std;
int FindUocSoLeMax(int n)
{
    int max = 1;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0 && i % 2 != 0 && i > max)
        {
            max = i;
        }
    }
    return max;
}
int main()
{
    cout << FindUocSoLeMax(100);
}