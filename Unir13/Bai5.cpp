#include <iostream>
using namespace std;
void DecToBin(int n)
{
    int i = 0;
    int binaryNum[1000];
    while(n != 0)
    {
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl;
}
int main()
{
    long dec = 11;
    DecToBin(dec);
}