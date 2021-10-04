#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int left = low;
    int right = high-1;
    while(true)
    {
        while(left <= right && arr[left] < pivot)
        {
            left++;
        }
        while(right >= left && arr[right] > pivot)
        {
            right--;
        }
        if(left >= right)
        {
            break;
        }
        swap(arr[left], arr[right]);
        left++; right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = Partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
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
    int arr[7] = {10,70,90,40,50,80,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    Print(arr, n);
    QuickSort(arr, 0, n-1);
    Print(arr, n);
}   