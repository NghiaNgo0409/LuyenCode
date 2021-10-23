
#include <stdio.h>
 
// Kiểm tra theo kiểu bài toán thuận
bool IsASC1(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] >= a[i])
            dem++;
    }
    if (dem == n - 1)
        return true;
    else
        return false;
}
 
// Kiểm tra theo kiểu bài toán ngịch
bool IsASC2(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
 
// Kiểm tra theo kiểu bài toán thuận
bool IsDESC1(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] <= a[i])
            dem++;
    }
    if (dem == n - 1)
        return true;
    else
        return false;
}
 
// Kiểm tra theo kiểu bài toán ngịch
bool IsDESC2(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            return false;
    }
    return true;
}
 
void check(int a[], int n){
    if(IsASC1(a, n)){
        printf("\nDay so tang dan!");
    }else if(IsDESC1(a, n)){
        printf("\nDay so giam dan!");
    }else{
        printf("\nDay so khong tang khong giam!");
    }
}
 
int main()
{
    int a1[] = {1, 3, 5, 7, 7};
    int a2[] = {4, 3, 2, 1, 1, 1};
    int a3[] = {1, 3, 2, 4, 5, 6};
 
    check(a1, sizeof(a1)/ sizeof(int));
    check(a2, sizeof(a2)/ sizeof(int));
    check(a3, sizeof(a3)/ sizeof(int));
}
 