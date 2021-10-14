#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    cout << "Nhap hai so: ";
    cin >> num1; cin >> num2;
    cout << "Nhap toan tu: ";
    cin >> op;
    cout << "Ket qua cua " << num1 << " " << op << " " << num2 << " = ";
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1/num2;
        break;
    }
}