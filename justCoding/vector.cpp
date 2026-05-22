#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int key = 8;
    vector<int> arr = {5, 2, 8, 1, 3};

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}