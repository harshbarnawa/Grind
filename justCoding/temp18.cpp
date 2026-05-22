#include<iostream>
using namespace std;

int main() {
    
    int n = 5;
    for(int i = 0;i < n;i++){
        cout << "*"<< " ";
    }
    cout << endl;
    for(int i = 0;i < n - 2;i++){
        for(int i = 0;i < 10;i++){
        if(i==0 || i == 7){
            cout<<"*";
        }
        cout << " ";
    }
    cout << endl;
    }
    
    for(int i = 0;i < n;i++){
        cout << "*"<< " ";
    }
    return 0;
}