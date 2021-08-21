#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
void ArrangeDecreasingArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {3,1,5,-4,2};
    PrintArray(a, 5);
    ArrangeDecreasingArray(a, 5);
    PrintArray(a, 5);
}