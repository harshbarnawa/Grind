#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3};
    int n = 4;

    int freq[10] = {0}; //assuming  0–9

    for(int i = 0;i < n;i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < 10;i++) {
        if(freq[i] > 1) {
            cout <<"Duplicate: " << i << endl;
        }
    }

    return 0;
}