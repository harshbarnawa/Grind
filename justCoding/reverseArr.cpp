#include <iostream>
using namespace std;

int rev(int arr[], int n)
{
    int st = 0, en = n - 1;
    while (st < en)
    {
        swap(arr[st], arr[en]);
        st++;
        en--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 7;

    rev(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}