#include<iostream>
using namespace std;

bool pall(int n){
    int rev = 0;
    int temp = n;
    while(temp!=0){
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp=temp/10;
    }
    if(rev==n){
        cout << "Num is pall";
    }
    cout << "Num is not pall";
}

int main() {
    int n = 86768;

    pall(n);
    return 0;
}