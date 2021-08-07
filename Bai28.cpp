#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    cout << "Tong tat ca uoc so  cua " << n << " nho hon chinh no : " << endl; 
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}