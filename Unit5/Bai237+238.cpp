#include <iostream>
using namespace std;
int FindMaxRate(int a[], int n)
{
    int max = 1; // Mỗi phần tử xuất hiện ít nhất 1 lần
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    return max;
}
bool IsNotDuplicate(int a[], int n, int index)
{
    for (int i = index - 1; i >= 0; i--)
    {
        if (a[i] == a[index])
        {
            return false;
        }
    }
    return true;
}
int FindRateOfEachValue(int a[], int n, int index)
{
    int count = 1; // Đếm chính nó
    for (int i = index + 1; i < n; i++)
    {
        if (a[i] == a[index])
        {
            count++;
        }
    }
    return count;
}
void ListMaxRate(int a[], int n)
{
    int rateMax = FindMaxRate(a, n);
    for (int i = 0; i < n; i++)
    {
        if (IsNotDuplicate(a, n, i))
        {
            int rate = FindRateOfEachValue(a, n ,i);
            if (rate == rateMax)
            {
                cout << "Gia tri " << a[i] << " xuat hien nhieu nhat voi " << rateMax << " lan"; 
            }
        }
    }
}
int main()
{
    int a[] = {1,2,3,2,4,2};
    ListMaxRate(a, 6);
}