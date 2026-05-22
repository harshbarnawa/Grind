#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3};
    int n = 4;

    sort(arr, arr + n);
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            cout << "Duplicate: " << arr[i] << endl;
        }
    }

    return 0;
}