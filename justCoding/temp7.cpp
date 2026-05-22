#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}