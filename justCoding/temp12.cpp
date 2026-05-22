#include<iostream>
using namespace std;

int fact(int fac,int n){

     for(int i = 1;i <= n;i++){
        fac = fac * i;
    }
    return fac;
}

int main() {
    int fac = 1;
    int n;

    cout << "Enter num: ";
    cin >> n;
    fac = fact(fac,n);
   
    cout << "Factorial is: "<< fac;
    return 0;
}