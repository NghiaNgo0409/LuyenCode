#include <iostream> 
using namespace std;
void ArrangeIncrement(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j]= temp;
            }
        }
    }
}
int main()
{
    int a[6] = {3,9,-2,1,7,2};
    ArrangeIncrement(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}