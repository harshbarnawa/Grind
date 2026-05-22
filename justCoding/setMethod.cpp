#include<iostream>
#include<set>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3};
    int n = 4;

    set<int> s;

    for(int i = 0; i < n; i++) {
        if(s.count(arr[i])) {
            cout << "Duplicate: " << arr[i] << endl;
        }
        s.insert(arr[i]);
    }

    return 0;
}