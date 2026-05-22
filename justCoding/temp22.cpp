#include<iostream>
using namespace std;

int count(int n){
    int ct = 0;
    while(n > 0){
        n = n / 10;
        ct++;
    }
    return ct;
}

int main() {
    int n = 9825;
    

    cout << count(n);
    return 0;
}