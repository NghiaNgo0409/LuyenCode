#include <iostream>
#include <string>
using namespace std;
class Date
{
    private:
    int day, month, year;
    public:
    Date()
    {
        day = month = year = 0;
    }
    ~Date()
    {
        day = month = year = 0;
    }
    void input()
    {
        cout << "Nhap ngay: ";
        cin >> day;
        cout << "Nhap thang: ";
        cin >> month;
        cout << "Nhap nam: ";
        cin >> year;
    }
    void output()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
class Ticket
{
    private:
    string name;
    Date date;
    int price;
    public:
    Ticket()
    {
        name = "";
        price = 0;
    }
    ~Ticket()
    {
        name = "";
        price = 0;
    }
    void input()
    {
        cout << "Nhap ten chuyen: "; fflush(stdin); getline(cin, name);
        cout << "Nhap ngay bay: " << endl;
        date.input();
        cout << "Nhap gia tien: "; cin >> price;
    }
    void output()
    {
        cout << "Ten chuyen bay: " << name << endl;
        cout << "Ngay bay: "; date.output();
        cout << "Gia tien: " << price << endl;
    }
    int getPrice()
    {
        return price;
    }
};
class People
{
    protected:
    string name;
    string sex;
    int age;
    public:
    People()
    {
        name = sex = "";
        age = 0;
    }
    ~People()
    {
        name = sex = "";
        age = 0;
    }
    void input()
    {
        cout << "Nhap ho va ten: "; fflush(stdin); getline(cin, name);
        cout << "Nhap gioi tinh: "; fflush(stdin); getline(cin, sex);
        cout << "Nhap tuoi: "; cin >> age;
    }
    void output()
    {
        cout << "Ho va ten: " << name << endl;
        cout << "Gioi tinh: " << sex << endl;
        cout << "Tuoi: " << age << endl;
    }
};
class Guest : public People
{
    private:
    Ticket ticket[1000];
    int amount;
    int sum;
    public:
    Guest()
    {
        amount = 0;
        ticket[0];
        sum = 0;
    }
    ~Guest()
    {
        amount = 0;
        ticket[0];
        sum = 0;
    }
    void input()
    {
        People :: input();
        cout << "Nhap so luong ve hanh khach da mua: "; cin >> amount;
        ticket[amount];
        for(int i = 0; i < amount; i++)
        {
            ticket[i].input();
            sum += ticket[i].getPrice();
        }
    }
    void output()
    {
        cout << "Thong tin khach hang: " << endl;
        People :: output();
        cout << "Thong tin chuyen bay: " << endl;
        for(int i = 0; i < amount; i++)
        {
            ticket[i].output();
        }
        cout << "Tong tien: " << sum << endl;
    }

    bool operator < (const Guest &obj)
    {
        if(sum < obj.sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
void swap(Guest &a, Guest &b)
{
    Guest temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << "Nhap so luong hanh khach: "; int n; cin >> n;
    Guest *arr = new Guest[n];
    for(int i = 0; i < n; i++)
    {
        arr[i].input();
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        arr[i].output();
    }
    cout << endl << endl;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        arr[i].output();
    }
}
