#include <iostream>
using namespace std;
void List(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                cout << "Cap ( " << a[i] << "  " << a[j] << " )" << endl; 
            }
        }
    }
}
int main()
{
    int a[6] = {2,5,-3,6,8,4};
    List(a, 6);
}