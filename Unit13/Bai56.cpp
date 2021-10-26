#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<int> DecToBin(int n)
{
    vector<int> vec;
    while(n > 0)
    {
        vec.push_back(n % 2);
        n /= 2;
    }
    return vec;
}
int BinToDec(vector<int> vec)
{
    int p = 0;
    int num = 0;
    for(int i = 0; i < vec.size(); i++)
    {
        num += vec[i] * pow(2, p);
        p++;
    }
    return num;
}
int main()
{
    int n; cin >> n;
    vector<int> vec;
    vec = DecToBin(n);
    for(int i = vec.size() - 1; i >= 0; --i)
    {
        cout << vec[i];
    }
    cout << endl;
    cout << BinToDec(vec);
}