#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> DecToOct(int num)
{
    vector<int> oct;
    while(num > 1)
    {
        oct.push_back(num % 8);
        num /= 8;
    }
    return oct;
}
int OctToDect(vector<int> oct)
{
    int val = 0;
    int len = oct.size();
    int p = 0;
    for(int i = 0; i < len; i++)
    {
        val += (oct[i] * pow(8,p));
        p++;
    }
    return val;
}
int main()
{
    int n; cin >> n;
    vector<int> oct = DecToOct(n);
    for(int i = oct.size() - 1; i >= 0; i--)
    {
        cout << oct[i];
    }
    cout << endl;
    cout << OctToDect(oct);
}