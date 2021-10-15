#include <iostream>
using namespace std;
const int MAX = 1e6;
int cnt[MAX];
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        do
        {
            cin >> a[i];
            if(a[i] < 0)
            {
                cout << "Gia tri khong hop le. Moi nhap lai";
            }
        } while (a[i] < 0);
    }
    for(int i = 0; i < MAX; i++)
    {
        cnt[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    for(int i = 0; i < MAX; i++)
    {
        if(cnt[i] > 0)
        {
            cout << "Gia tri " << i << " xuat hien " << cnt[i] << " lan" << endl;
        }
    }
}
