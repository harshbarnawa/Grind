#include<iostream>
using namespace std;

int add(int a,int b){

    return a ^ b;
}

int main(){

    int a, b;
    cout << "First: ";
    cin>>a;

    cout << "Second: ";
    cin>>b;

    cout << add(a,b);
    return 0;
}