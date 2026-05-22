#include<iostream>
using namespace std;

void back(int n){
    if(n == 1){
        cout <<5<<endl;
        return;
    }
        cout << n << " ";
        
    back(n - 1);
}
void forw(int n){
    if(n == 1){
        cout <<1 << " ";
        return;
    }
    
    forw(n - 1);
    cout << n << " ";
}

int main() {
    int n = 5;

    back(n);
    forw(n);
    
    return 0;
}