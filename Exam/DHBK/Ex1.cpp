#include <iostream>
#include <math.h>
using namespace std;
void Input(int** a, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Output(int** a, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int FindFirstPrimeInRow(int* a, int c)
{
    for(int i = 0; i < c; i++)
    {
        if(isPrime(a[i]))
        {
            return a[i];
        }
    }
}
int FindMaxPrimeInRow(int* a, int c)
{
    int max = FindFirstPrimeInRow(a, c);
    for(int i = 0; i < c; i++)
    {
        if(isPrime(a[i]) && a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int** CreateMatrix(int r, int c)
{
    int** a = new int*[r];
    for(int i = 0; i < r; i++)
    {
        a[i] = new int[c];
    }
    return a;
}
int main()
{
    int n, m;
    do
    {
        cin >> n;
        if(n < 0 || n > 50)
        {
            cout << "Du lieu nhap khong dung. Nhap lai!";
        }
    } while (n < 0 || n > 50);
    
    do
    {
        cin >> m;
        if(m < 0 || m > 50)
        {
            cout << "Du lieu nhap khong dung. Nhap lai!";
        }
    } while (m < 0 || m > 50);

    int** a = CreateMatrix(n, m);
    Input(a, n, m);
    Output(a, n, m);
    for(int i = 0; i < n; i++)
    {
        int maxPrime = FindMaxPrimeInRow(a[i], m);
        int* c = new int[m];
        int count = 0;
        for(int j = 0; j < m; j++)
        {
            if(maxPrime == a[i][j])
            {
                c[count++] = j;
            }
        }
        if(count > 0)
        {
            cout << "Dong " << i << ": So nguyen to lon nhat " << maxPrime << " xuat hien " << count << " lan tai vi tri cot ";
            while(count > 0)
            {
                cout << c[--count] << " ";
            }
        }
        else
        {
            cout << "Dong " << i << ": Khong co so nguyen to nao";
        }
        cout << endl;
    }
}