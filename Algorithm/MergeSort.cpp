#include <iostream>
using namespace std;
void Merge(int arr[], int l, int m, int r)
{
    int i, k, j;
    int n1 = m - l + 1;
    int n2 = r - m;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for(int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    i = 0; j = 0; k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int m = l + (r-l)/2;

        MergeSort(arr,l, m);
        MergeSort(arr, m+1, r);

        Merge(arr, l, m ,r);
    }
}

void Print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    Print(arr, size);
    MergeSort(arr, 0, size-1);
    Print(arr, size);
}