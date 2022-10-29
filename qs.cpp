#include<iostream>
using namespace std;
void swap(int *j,int *k){
    int temp=*j;
    *j=*k;
    *k=temp;
}
int qs(int arr[],int s,int e){
    int piv=arr[e];
    int ind=s-1;
    for(int i=s;i<=e-1;i++){
        if(arr[i]<piv){
            ind++;
            swap(&arr[ind],&arr[i]);
        }
    }
    swap(&arr[ind+1],&arr[e]);
    return (ind+1);
}
void fun(int arr[],int s,int e){
    if(s<e){
  int pi=qs(arr,s,e);
  fun(arr,s,pi-1);
  fun(arr,pi+1,e);
    }
}
int main(){
    int arr[]={1000,27,160,400,50};
    fun(arr,0,4);
    for(int i=0;i<5;i++)
    cout<<" "<<arr[i];
    return 0;
}