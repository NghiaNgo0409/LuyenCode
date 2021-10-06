#include <iostream>
using namespace std;
bool CheckLeapYear(int year)
{
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}
int main()
{
    cout << CheckLeapYear(2002);
}