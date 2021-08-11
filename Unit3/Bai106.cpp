#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so co 3 chu so: " << endl;
    cin >> n;
    while (n < 100 && n > 999)
    {
        cout << "So khong hop le, moi nhap lai: " << endl;
        cin >> n;
    }
    int donvi = n % 10;
    n /= 10;
    int chuc = n % 10;
    int tram = n / 10;
    switch(tram)
    {
        case 2:
            cout << "Hai";
            break;
        case 3:
            cout << "Ba";
            break;
        case 4:
            cout << "Bon";
            break;
        case 5:
            cout << "Nam";
            break;
        case 6:
            cout << "Sau";
            break;
        case 7:
            cout << "Bay";
            break;
        case 8:
            cout << "Tam";
            break;
        case 9:
            cout << "Chin";
            break;
        default:
            cout << "Mot";
            break;
    }
    cout << " tram ";
    switch(chuc)
    {
        case 1:
            cout << "mot";
            break;
        case 2:
            cout << "hai";
            break;
        case 3:
            cout << "ba";
            break;
        case 4:
            cout << "bon";
            break;
        case 5:
            cout << "nam";
            break;
        case 6:
            cout << "sau";
            break;
        case 7:
            cout << "bay";
            break;
        case 8:
            cout << "tam";
            break;
        case 9:
            cout << "chin";
            break;
        default:
            cout << "le ";
            break;
    }
    switch(donvi)
    {
        case 2:
            cout << "hai";
            break;
        case 3:
            cout << "ba";
            break;
        case 4:
            cout << "bon";
            break;
        case 5:
            cout << "lam";
            break;
        case 6:
            cout << "sau";
            break;
        case 7:
            cout << "bay";
            break;
        case 8:
            cout << "tam";
            break;
        case 9:
            cout << "chin";
            break;
        default:
            cout << "mot";
            break;
    }
}