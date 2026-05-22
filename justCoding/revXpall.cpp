#include<iostream>
using namespace std;

int rev(int num){
    int rev = 0;
    
    while(num!=0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}
void pall(int num){
    int temp = rev(num);
    cout << (num == temp?"Pallindrome":"Non pallindrome");
}
int main(){
    int num;
    cin>>num;
    

    cout << "Reversed num: "<< rev(num)<<endl;
    pall(num);
    
}