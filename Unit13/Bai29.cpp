#include <iostream>
#define MAX 20
using namespace std;
int n;
int Check[MAX] = {0};
int A[MAX];
void Print()
{
    for(int i = 1; i <= n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void Try(int k)
{
    for(int i = 1; i <= n; i++)
    {
        if(!Check[i])
        {
            A[k] = i;
            Check[i] = 1;
            if (k == n)
            {
                Print();
            }
            else
            {
                Try(k + 1);
            }
            Check[i] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
}