#include <iostream>
using namespace std;

int search(int arr[], int key)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {2, 4, 6, 10, 8};
    int key, idx;

    cout << "Enter Key: ";
    cin >> key;

    idx = search(arr, key);
    cout << "Value found on index: " << idx << endl;
    return 0;
}