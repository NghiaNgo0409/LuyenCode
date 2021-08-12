#include <iostream>
using namespace std;
void PrintPrimeNumberSmallerThanN(int n)
{
    for (int i = 2; i < n; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    PrintPrimeNumberSmallerThanN(40);
}