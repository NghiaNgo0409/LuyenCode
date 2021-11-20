#include <iostream>
#include <math.h>
using namespace std;
#define MAX -99999
bool isPrime(int n)
{
    if (n < 2)
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
bool isSquareNumber(int n)
{
    int x = sqrt(n);
    if(x * x == n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Input(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void Output(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int CountPrime(int* a, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(isPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
int CountSquareNum(int* a, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(isSquareNumber(a[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    do
    {
        cin >> n;
        if(n < 0 || n > 100)
        {
            cout << "Nhap sai. Moi nhap lai!";
        }
    } while (n < 0 || n > 100);
    
    int* a = new int[n];
    Input(a, n);
    Output(a, n);
    cout << endl;
    int numP = CountPrime(a, n);
    int numS = CountSquareNum(a, n);
    cout << numP << " " << numS << endl;
    int* p = new int[numP];
    int* s = new int[numS];
    int posP = 0, posS = 0;
    for(int i = 0; i < n; i++)
    {
        if(isPrime(a[i]))
        {
            p[posP++] = a[i];
            a[i] = MAX;
        }
        if(isSquareNumber(a[i]))
        {
            s[posS++] = a[i];
            a[i] = MAX;
        }
    }
    for(int i = 0; i < posP; i++)
    {
        cout << p[i] << " ";
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] != MAX)
        {
            cout << a[i] << " ";
        }
    }
    for(int i = 0; i < posS; i++)
    {
        cout << s[i] << " ";
    }
}