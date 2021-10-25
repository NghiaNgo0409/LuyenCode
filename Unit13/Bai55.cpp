#include <iostream>
using namespace std;
template<typename T> 
T MaxOfTwo(T a, T b)
{
    return a > b ? a : b;
}
template<typename T>
T MinOfTwo(T a, T b)
{
    return a < b ? a : b;
}
template<typename T>
T MaxOfThree(T a, T b, T c)
{
    return MaxOfTwo(a, MaxOfTwo(b, c));
}
template<typename T>
T MinOfThree(T a, T b, T c)
{
    return MinOfTwo(a, MinOfTwo(b, c));
}
int main()
{
    int a, b, c; cin >> a >> b >> c;
    cout << MaxOfThree(a, b, c) << endl;
    cout << MinOfThree(a, b, c) << endl;
}