#include<iostream>
#include<vector>
using namespace std;

int main(){
    int l;
    cin>>l;

    while (l--) {
        int n;
        cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    bool dec = true;

    for(int i = 1;i<n;i++){
        if(arr[i-1]<arr[i]){
            dec = false;
            break;
        }
    }
    cout << (dec ? "NO\n" : "YES\n");
    
}


    return 0;
}