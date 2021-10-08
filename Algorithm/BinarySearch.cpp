#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int x)
{
    int r = n - 1;
    int l = 0;
    while(r >= l)
    {
        int mid = l + (r - l)/2;

        if(arr[mid] == x)
        {
            return mid;
        }

        if(arr[mid] > x)
        {
            r = mid - 1;
        }

        if(arr[mid] < x)
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    cout << BinarySearch(arr, n, x);
}