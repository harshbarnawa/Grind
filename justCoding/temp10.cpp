#include <iostream>
using namespace std;

void change2(int &sum, int a, int b)
{
    sum = a + b;
    cout << "In Func" << endl;
    cout << sum << endl;
}

int main()
{
    int a = 100;
    int b = 300;
    int sum = 0;

    change2(sum, a, b);
    cout << "In Main" << endl;
    cout << sum;
    return 0;
}