#include <iostream>
using namespace std;
int main()
{
    int n = 648768, count = 0;
    int max = n % 10;
    while (n != 0)
    {
        if ((n % 10) >= max)
        {
            if (max == n % 10)
            {
                count++;
            }
            max = (n % 10);
        }

        n /= 10;
    }
    cout << "Chu so lon nhat la : " << max << endl;
    cout << "So luong chu so lon nhat la : " << count << endl;
}