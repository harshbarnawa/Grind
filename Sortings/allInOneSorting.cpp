#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    bool isSwap = false;
    for(int i = 0;i < n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap = true;
        }
    }
    if(!isSwap){
        return;
    }
    }
}

void selectionSort(int arr[],int n){
    for(int i = 0;i < n - 1;i++){
        int sI = i;
        for(int j = i + 1;j < n;j++){
            if (arr[j] < arr[sI]){
                sI = j;
            }
        }
        swap(arr[i],arr[sI]);
    }
}

void insertionSort(int arr[],int n){
    for(int i = 1;i < n;i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

int main() {
    int n = 6;
    int arr[n] = {4,3,6,1,5,2};
    char ch;
    cout << "Choose Sorting(bubble=b, selection=s, instertion=i) : ";
    cin >> ch;
    if(ch == 'b' || ch == 'B'){
        bubbleSort(arr, n);
    } else if(ch == 's' || ch == 'S'){
        selectionSort(arr,n);
    } else if(ch == 'i' || ch == 'I'){
        insertionSort(arr,n);
    }
        
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}