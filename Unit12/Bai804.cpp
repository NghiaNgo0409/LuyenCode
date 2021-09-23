#include <string>
#include <iostream>
using namespace std;
void STRCAT(string a, string b)
{
    int length1 = a.length();
    int size1 = sizeof(a);

    int length2 = b.length();
    for (int i = 0; i < length2; i++)
    {
        a[length1++] = b[i];
        if (length1 == size1 - 1)
        {
            break;
        }
    }
    a[length1] = '\0';
}
int main()
{
    
}