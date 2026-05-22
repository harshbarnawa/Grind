#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3};
    int n = 4;

    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            if(arr[i] == arr[j]) {
                cout<<"Duplicate: " << arr[i] << endl;
            }
        }
    }

    return 0;
}