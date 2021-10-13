#include <iostream>
#include <math.h>
using namespace std;
class SoPhuc
{
    private:
        int phanao;
        int phanthuc;
    public:
        SoPhuc()
        {
            phanao = phanthuc = 0;
        }
        void input()
        {
            cout << "Nhap phan thuc: ";
            cin >> phanthuc;
            cout << "Nhap phan ao: ";
            cin >> phanao;
        }
        void output()
        {
            cout << phanthuc << phanao << "i" << endl;
        }
        float modul()
        {
            return sqrt(pow(phanthuc,2) + pow(phanao, 2));
        }
        int operator< (SoPhuc x)
        {
            return modul() < x.modul();
        }
};
int main()
{
    int n; cin >> n;
    SoPhuc* sp = new SoPhuc[n];
    for(int i = 0; i < n; i++)
    {
        sp[i].input();
    }
    SoPhuc min = sp[0];
    for(int i = 0; i < n; i++)
    {
        if(sp[i] < min)
        {
            min = sp[i];
        }
    }
    min.output();
}