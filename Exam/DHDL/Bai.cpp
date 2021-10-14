#include <iostream>
using namespace std;
#define MAX 100
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a[MAX], b[MAX];
    int n, c1, c2, temp;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    c1 = c2 = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu " << i + 1 << " : ";
        cin >> temp;
        if(temp > 0)
        {
            b[c2++] = temp;
        }
        else
        {
            a[c1++] = temp;
        } 
    }
    for(int i = 0; i < c2 - 1; i++)
    {
        for(int j = i + 1; j < c2; j++)
        {
            if(b[i] > b[j])
            {
                Swap(b[i] , b[j]);
            }
        }
    }
    for(int i = 0; i < c1 - 1; i++)
    {
        for(int j = i + 1; j < c1; j++)
        {
            if(a[i] < a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < c1; i++)
    {
        cout << a[i] << " ";
    }
    for(int i = 0; i < c2; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}