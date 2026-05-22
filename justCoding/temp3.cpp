#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 3, 1, 8, 2};

    int maxN = 0;
    int minN = 100;
    int maxI, minI;

    for (int i = 0; i < 5; i++)
    {
        if (maxN < arr[i])
        {
            maxN = arr[i];
            maxI = i;
        }
        if (minN > arr[i])
        {
            minN = arr[i];
            minI = i;
        }
    }

    swap(arr[minI], arr[maxI]);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}