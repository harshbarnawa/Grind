#include<iostream>
#include<vector>
using namespace std;

int twoS(vector<int> vec,int target){
    int idx = 0;
    for(int i : vec){
        if(i==target){
            return idx;
        }
        idx++;
        
    }
    return -1;
}

int main() {
    vector<int> vec = {3,7,2,1,4};
    int target = 9;
    int result = twoS(vec,target);
    
    if(result==-1){
        cout << "Not found";
    } else {
        cout <<"Element found on: "<< result;
    }
    return 0;
}