#include <iostream>
using namespace std;
int main()
{
    int n = 16553, count = 0;
    int min = n % 10;
    while (n != 0)
    {
        if ((n % 10) <= min)
        {
            if (min == n % 10)
            {
                count++;
            }
            min = (n % 10);
        }

        n /= 10;
    }
    cout << "Chu so nho nhat la: " << min << endl;
    cout << "So luong chu so nho nhat la: " << count << endl;
}