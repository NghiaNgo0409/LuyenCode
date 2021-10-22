#include <iostream>
using namespace std;
float func(int x)
{
    float sum = 1;
    int i = 1;
    float temp = x;
    while(temp > 1e-20)
    {
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}
int main()
{
    cout << func(10);
}