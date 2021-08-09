#include <iostream>
using namespace std;
int main()
{
    int month;
    cin >> month;
    switch (month)
    {
    case 1:
    case 2:
    case 3:
        cout << "Quy mot" << endl;
        break;
    case 4:
    case 5:
    case 6:
        cout << "Quy hai" << endl;
        break;
    case 7:
    case 8:
    case 9:
        cout << "Quy ba" << endl;
        break;
    case 10:
    case 11:
    case 12:
        cout << "Quy bon" << endl;
        break;
    default:
        cout << "Khong co thang nay" << endl; 
        break;
    }
}