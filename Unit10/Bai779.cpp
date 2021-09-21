#include <iostream>
#include <math.h>
using namespace std;
bool CheckSynmetric(int x)
{
    int num = 0;
    int n = x;
    while(n > 0)
    {
        num *= 10 + n%10;
        n /= 10;
    }
    if (num == x)
    {
        return true;
    }
    return false;
}
int FindFirstSynmetric(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if (CheckSynmetric(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}
bool CheckFirstOddCharacter(int n)
{
    while(n < 10 && n > 0)
    {
        n /= 10;
    }
    if (n % 2 != 0)
    {
        return false;
    }
    return true;
}
int FindFirstOddCharacter(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(CheckFirstOddCharacter(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}
bool CheckPower2(int n)
{
    int i = 0;
    while(true)
    {
        if(pow(2,i) == n)
        {
            return true;
        }
        if(pow(2,i) > n)
        {
            return false;
        }
        i++;
    }
    return false;
}
void ListPower2(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(CheckPower2(a[i]))
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int FindMax(int *a, int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            a[i] = max;
        }
    }
    return max;
}
int FindBCNN(int *a, int n)
{
    int max = FindMax(a, n);
    int BCNN = max;
    while(true)
    {
        bool check = true;
        for(int i = 0; i < n; i++)
        {
            if (BCNN % a[i] != 0)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            return BCNN;
        }
        BCNN += max;
    }
}
void ListNumberAppearLeast(int *a, int n)
{
    int count[10] = {0};
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            count[0]++;
        }
        else
        {
            int temp = a[i];
            while(temp > 0)
            {
                int c = temp % 10;
                count[c]++;
                temp /= 10;
            }
        }
    }
    int min = count[0];
    for(int i = 0; i < 10; i++)
    {
        if(count[i] < min)
        {
            min = count[i];
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(count[i] == min)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int SumNumHasOddFirstCharacter(int *a, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(CheckFirstOddCharacter(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
bool CheckPrime(int n)
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
int SumPrime(int *a, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(CheckPrime(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int CountPrime(int *a, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(CheckPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
int FindFirstOdd(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            return a[i];
        }
    }
}
int FindOddMin(int *a, int n)
{
    int min = FindFirstOdd(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0 && a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
void Swap(int &a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void ArrangeDecreasing(int *a, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[i])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}
int main()
{
    
}