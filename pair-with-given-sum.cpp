#include<iostream>
using namespace std;
#include<algorithm>
void fun(int *arr,int n,int s){
    int l=0,r=n-1;
    sort(arr,arr+n);
    while(l<r){
        int t=arr[l]+arr[r];
        if(t<s){
            l++;
        }
        else if(t>s){
            r--;
        }
        else{
            cout<<"the sum can be obtained by the pair of :"<<"("<<arr[l]<<","<<arr[r]<<")"<<endl;
            l++;
            r--;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int sum;
    cout<<" enter the required sum : ";
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    fun(arr,n,sum);
    return 0;
}