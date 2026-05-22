#include<iostream>
using namespace std;

void prime(int num){
    int ct = 0;
    for(int i = 2;i < num;i++){
        if(num%i==0){
            ct++;
        }
    }
     if(ct==0){
        cout << "Num is prime";
    } else{
        cout << "Num is non prime";
    }
}

int main() {
    int num = 5;

    prime(num);
   
    return 0;
}