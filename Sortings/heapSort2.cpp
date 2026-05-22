#include<iostream>
using namespace std;

void heapify(int a[],int n,int i){
    int mx=i,l=2*i+1,r=2*i+2;

    if(l<n && a[l]>a[mx]) mx=l;
    if(r<n && a[r]>a[mx]) mx=r;

    if(mx!=i){
        swap(a[i],a[mx]);
        heapify(a,n,mx);
    }
}

void buildHeap(int a[],int n,int i){
    if(i<0) return;
    heapify(a,n,i);
    buildHeap(a,n,i-1);
}

void sortHeap(int a[],int n){
    if(n<=1) return;

    swap(a[0],a[n-1]);
    heapify(a,n-1,0);

    sortHeap(a,n-1);
}

int main(){
    int a[]={9,4,7,1,3,6,2};
    int n=7;

    buildHeap(a,n,n/2-1);
    sortHeap(a,n);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}