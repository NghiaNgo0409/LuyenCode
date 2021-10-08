#include <iostream>
using namespace std;
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SelectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                Swap(arr[i], arr[j]);
            }
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
    int arr[] = {65, 24, 12 ,21, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    Print(arr, n);

}