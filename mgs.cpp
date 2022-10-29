#include<iostream>
using namespace std;
void mgs(int arr[],int s,int e,int mid){
    int i=s,j=mid+1,k=s,p;
    int temp[10];
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i=i+1;
        }
        else{
            temp[k]=arr[j];
            j=j+1;
        }
        k=k+1;
    }
    while(j<=e){
        temp[k]=arr[j];
        k=k+1;
        j=j+1;
    }
    while(i<=mid){
        temp[k]=arr[i];
        k=k+1;
        i=i+1;
    }
    p=s;
    while(p<k){
        arr[p]=temp[p];
        p++;
    }
}
void fun(int arr[],int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        fun(arr,s,mid);
        fun(arr,mid+1,e);
        mgs(arr,s,e,mid);
    }
}
int main(){
    int n=6;
    int arr[n]={143,55,44,2,10,1};
    fun(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}