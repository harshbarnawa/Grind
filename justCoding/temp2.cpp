#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;

    cout << "enter the value of a : ";
    cin >> a;

    cout << "enter the value of b : ";
    cin >> b;

    cout << "enter the  operator(+,-,*,/) : ";
    cin >> op;

    if (op == '+')
    {
        cout << "result = " << a + b;
    }
    else if (op == '-')
    {
        cout << "result = " << a - b;
    }
    else if (op == '*')
    {
        cout << "result = " << a * b;
    }
    else
    {
        cout << "result = " << a / b;
    }
    return 0;
}