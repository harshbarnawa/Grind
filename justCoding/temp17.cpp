#include<iostream>
using namespace std;

int small(int arr[],int n){
    int min = 100;
    for(int i = 0;i < n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n = 5;
    
    int arr[n]= {4,4,6,8,6};

    cout << "ANss is: "<<small(arr,n);
}