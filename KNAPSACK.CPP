#include<iostream>
using namespace std;
int fun(int *arr1,int *arr2,int wtf,int n){
    if(n==0 || wtf==0)
    return 0;
    if(arr2[n-1]>wtf)
    return fun(arr1,arr2,wtf,n-1);
    else
    return max(arr1[n-1]+fun(arr1,arr2,wtf-arr2[n-1],n-1),fun(arr1,arr2,wtf,n-1));
}
int main(){
    int pu[]={60,100,120,30};
    int w[]={10,20,30,10};
    int wtf=40;
    cout<<fun(pu,w,wtf,4);
    return 0;
}