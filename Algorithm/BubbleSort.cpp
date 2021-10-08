#include <iostream>
using namespace std;
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort(int arr[], int n)
{
    bool haveSwap = false;
    for(int i = 0; i < n - 1; i++)
    {
        haveSwap = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                Swap(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if (haveSwap == false)
        {
            break;
        }
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    Print(arr, n);
}