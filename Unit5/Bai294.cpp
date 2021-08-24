#include <iostream>
using namespace std;
void PrintSubSpace2Value(int a[], int n)
{
    int length;
    for (int i = 0; i < n; i++)
    {
        for (length = 2 + i; length <= n; length++)
        {
            for (int j = i; j < length; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    PrintSubSpace2Value(a, 5);
}