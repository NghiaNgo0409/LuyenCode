#include <iostream>
using namespace std;
class PhanSo
{
    private:
    int tuso, mauso;
    public:
    PhanSo()
    {
        tuso = 0;
        mauso = -1;
    }
    ~PhanSo()
    {
        tuso = 0;
        mauso = -1;
    }
    void set()
    {
        cout << "Nhap tu so: ";
        cin >> tuso;
        cout << "Nhap mau so: ";
        cin >> mauso;
    }
    void get()
    {
        cout << tuso << "/" << mauso << endl;
    }
    PhanSo Cong(PhanSo a, PhanSo b)
    {
        PhanSo c;
        c.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
        c.mauso = a.mauso * b.mauso;
        return c;
    }
    PhanSo Tru(PhanSo a, PhanSo b)
    {
        PhanSo c;
        c.tuso = a.tuso * b.mauso - b.tuso * b.mauso;
        c.mauso = a.mauso * b.mauso;
        return c;
    }
    PhanSo Nhan(PhanSo a, PhanSo b)
    {
        PhanSo c;
        c.tuso = a.tuso * b.tuso;
        c.mauso = a.mauso * b.mauso;
        return c;
    }
    PhanSo Chia(PhanSo a, PhanSo b)
    {
        PhanSo c;
        c.tuso = a.tuso * b.mauso;
        c.mauso = a.mauso * b.tuso;
        return c;
    }
};
int main()
{
    PhanSo a;
    PhanSo b;
    a.set(); b.set();
    PhanSo c;
    c = c.Cong(a, b);
    c.get();
}