#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int count;
    getline(cin, s);
    for(int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
        {
            cout << "Chuoi khong doi xung" << endl;
            return 0;
        }
        else
        {
            count++;
        }
    }
    cout << "Chuoi doi xung" << endl;
    cout << "So luong ky tu giong nhau: " << count << endl;
}