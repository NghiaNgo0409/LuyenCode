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
int FindFirstSquareNumberInRow(int* a, int c)
{
    for(int i = 0; i < c; i++)
    {
        if(isSquareNumber(a[i]))
        {
            return a[i];
        }
    }
}
int FindPosMaxPrimeInRow(int* a, int c)
{
    int max = FindFirstPrimeInRow(a, c);
    int pos = 0;
    bool exist = false;
    for(int i = 0; i < c; i++)
    {
        if(isPrime(a[i]) && a[i] >= max)
        {
            max = a[i];
            pos = i;
            exist = true;
        }
    }
    if(exist)
    {
        return pos;
    }
    else
    {
        return -1;
    }
}
int FindPosMaxSquareNumberInRow(int* a, int c)
{
    int max = FindFirstSquareNumberInRow(a, c);
    int pos = 0;
    bool exist = false;
    for(int i = 0; i < c; i++)
    {
        if(isSquareNumber(a[i]) && a[i] >= max)
        {
            max = a[i];
            pos = i;
            exist = true;
        }
    }
    if(exist)
    {
        return pos;
    }
    else
    {
        return -1;
    }
}

int** CreateMatrix(int r, int c)
{
    int** a = new int* [r];
    for(int i = 0; i < r; i++)
    {
        a[i] = new int[c];
    }
    return a;
}
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void CheckAndSwapRow(int** a, int r, int c)
{
    int posP = -1, posS = -1;
    for(int i = 0; i < r; i++)
    {
        posP = FindPosMaxPrimeInRow(a[i], c);
        posS = FindPosMaxSquareNumberInRow(a[i], c);
        cout << posP << " " << posS << " " << endl;
        if(posP != -1 && posS != -1)
        {
            Swap(a[i][posP], a[i][posS]);
        }
    }
}
int main()
{
    int n, m;
    do
    {
        cin >> n;
        if(n < 0 || n > 50)
        {
            cout << "Nhap sai. Moi nhap lai!";
        }
    } while (n < 0 || n > 50);
    
    do
    {
        cin >> m;
        if(m < 0 || m > 50)
        {
            cout << "Nhap sai. Moi nhap lai!";
        }
    } while (m < 0 || m > 50);
    
    int** a = CreateMatrix(n, m);
    Input(a, n, m);
    Output(a, n, m);
    CheckAndSwapRow(a, n, m);
    Output(a, n, m);
}