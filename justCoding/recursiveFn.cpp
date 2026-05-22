#include<iostream>
using namespace std;

void rec(int n){
    if(n == 1){
        cout << n;
        return;
    }
    cout << n << " " ;
    rec(n - 1);
}

int main (){
    rec(7);

    return 0;
}