#include <iostream>
using namespace std;
void PrintAllSubArray(int a[], int n)
{
    int length;
    for (int i = 0; i < n; i++)
    {
        for (length = 1; length <= n; length++)
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
    PrintAllSubArray(a, 5);
}