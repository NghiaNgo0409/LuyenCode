#include <iostream>
#define MAX 8
using namespace std;
int A[MAX][MAX] = {0};
int X[MAX] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[MAX] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dem = 0;
int n;
void Print()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
void Move(int x, int y)
{
    dem++;
    A[x][y] = dem;
    for(int i = 0; i < 8; i++)
    {
        if(dem == n * n)
        {
            cout << "Cac buoc di la: " << endl;
            Print();
            exit(0);
        }
        int u = x + X[i];
        int v = y + Y[i];
        if(u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
        {
            Move(u, v);
        }
    }
    dem--;
    A[x][y] = 0;
}
int main()
{
    cin >> n;
    int x, y;
    cin >> x; cin >> y;
    Move(x, y);
    cout << "Khong tim duoc buoc di";
}
