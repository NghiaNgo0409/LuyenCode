#include <iostream>
using namespace std;
int main()
{
    float math, literature, english;
    cin >> math >> literature >> english;
    float dtb = (math + literature + english)/3;
    if(dtb >= 0 && dtb < 4)
    {
        cout << "Hoc sinh yeu" << endl;
    }
    else if(dtb >= 4 && dtb < 6.5)
    {
        cout << "Hoc sinh trung binh" << endl;
    }
    else if(dtb >= 6.5 && dtb < 8)
    {
        cout << "Hoc sinh kha" << endl;
    }
    else if (dtb >= 8 && dtb <= 10)
    {
        cout << "Hoc sinh gioi" << endl;
    }
}