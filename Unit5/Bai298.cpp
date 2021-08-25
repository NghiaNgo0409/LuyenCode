#include <iostream>
using namespace std;
bool CheckIncreasing(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}
void PrintSubSpace(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void CountSubSpaceIncreasing(int a[], int n)
{
    int length, count = 0;
    int b[100], nb;
    for(int i = 0; i < n; i++)
    {
        for(length = 2 + i; length <= n; length++)
        {
            nb = 0;
            for (int j = i; j < length; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if(CheckIncreasing(b, nb))
            {
                PrintSubSpace(b, nb);
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int a[] = {5,1,3,4,2};
    CountSubSpaceIncreasing(a, 5);
}