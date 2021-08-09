#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n = 0;
    do
    {
        n++;
        sum += n;
    } while (sum <= 10000);
    
    cout << n << endl;
}