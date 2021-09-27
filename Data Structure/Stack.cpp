#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isOperator(char c)
{
    switch (c)
    {
    case '+': case '-': case '*': case '/': 
        return true;
    default:
        return false;
    }
}
float Perform(char c, int op1, int op2)
{
    switch (c)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    }
}
int Postfix(stack<int> &stk, string s)
{
    float result;
    for(int i = 0; i < s.length(); i++)
    {
        if(!isOperator(s[i]))
        {
            stk.push(s[i] - 48);
        }
        else if (isOperator(s[i]))
        {
            int op2 = stk.top(); stk.pop();
            int op1 = stk.top(); stk.pop();
            result = Perform(s[i], op1, op2);
            stk.push(result);
        }
    }
    return stk.top();
}
int main()
{
    stack<int> s;
    string exp = "234+*5-22*+";
    cout << Postfix(s, exp);
}