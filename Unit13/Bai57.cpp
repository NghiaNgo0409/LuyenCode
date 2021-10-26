#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<int> DecToOct(int n)
{
    vector<int> vec;
    while(n > 0)
    {
        vec.push_back(n % 8);
        n /= 8;
    }
    return vec;
}
int OctToDec(vector<int> vec)
{
    int val = 0; int p = 0;
    for(int i = 0; i < vec.size(); i++)
    {
        val = val + vec[i] * pow(8, p);
        p++;
    }
    return val;
}
int main()
{
    int n; cin >> n;
    vector<int> vec;
    vec = DecToOct(n);
    for(int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i];
    }
    cout << endl;
    cout << OctToDec(vec);
}