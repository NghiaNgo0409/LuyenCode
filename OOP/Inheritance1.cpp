#include <iostream>
#include <string>
using namespace std;
class Color
{
    protected:
    string nameColor;
    string idColor;
    public:
    Color()
    {
        nameColor = "";
        idColor = "";
    }
    Color(string name, string id)
    {
        nameColor = name;
        idColor = id;
    }
    ~Color()
    {
        nameColor = "";
        idColor = "";
    }
    friend istream &operator>>(istream &is, Color &obj)
    {
        cout << "Nhap ten mau: "; fflush(stdin); getline(is, obj.idColor);
        cout << "Nhap ma mau: "; fflush(stdin); getline(is, obj.nameColor);
        return is;
    }
    friend ostream &operator<<(ostream &os, Color obj)
    {
        os << "Ten mau: " << obj.nameColor << endl;
        os << "Ma mau: " << obj.idColor << endl;
        return os;
    }
    string getNameColor()
    {
        return nameColor;
    }
};
class Point
{
    protected:
    int x, y;
    public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    ~Point()
    {
        x = 0;
        y = 0;
    }
    friend istream &operator>> (istream &is, Point &obj)
    {
        cout << "Nhap x: "; fflush(stdin); is >> obj.x;
        cout << "Nhap y: "; fflush(stdin); is >> obj.y;
        return is;
    }
    friend ostream &operator<< (ostream &os, Point obj)
    {
        os << "X la: " << obj.x << endl;
        os << "Y la: " << obj.y << endl;
        return os;
    }
    bool CheoChinh()
    {
        if (x == y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class Pixel : public Color, public Point
{
    public:
    Pixel()
    {
        x = 0;
        y = 0;
        nameColor = "";
        idColor = "";
    }
    Pixel(int x, int y, string name, string id)
    {
        this->x = x;
        this->y = y;
        nameColor = name;
        idColor = id;
    }
    ~Pixel()
    {
        x = 0;
        y = 0;
        nameColor = "";
        idColor = "";
    }
    friend istream &operator>> (istream &is, Pixel &obj)
    {
        cout << "Nhap x: "; fflush(stdin); is >> obj.x;
        cout << "Nhap y: "; fflush(stdin); is >> obj.y;
        cout << "Nhap ten mau: "; fflush(stdin); is >> obj.nameColor;
        cout << "Nhap ma mau: "; fflush(stdin); is >> obj.idColor;
        return is;
    }
    friend ostream &operator<< (ostream &os, Pixel obj)
    {
        os << "X la: " << obj.x << endl;
        os << "Y la: " << obj.y << endl;
        os << "Ten mau: " << obj.nameColor << endl;
        os << "Ma mau: " << obj.idColor << endl;
        return os;
    }
    bool Check()
    {
        if ((x == y) && idColor == "#0000FF")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int n;
    cout << "Nhap so luong pixel: ";
    cin >> n;
    Pixel *arr = new Pixel[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        if(arr[i].Check() == true)
        {
            cout << arr[i];
        }
    }
    return 0;
}