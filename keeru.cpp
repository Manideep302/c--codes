#include<iostream>
using namespace std;
int fun(int *a,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        int j=i+2;
        if(j<n){
        if(a[i]!=a[j]){
        cnt++;
        }
    }
    }
    cout<<cnt;
    return cnt;
}
int main(){
    int arr[6]={3,2,2,2,2,1};
    int k=fun(arr,6);
    cout<<k;
    return 0;
}