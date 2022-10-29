// we can use hashing ,but it takes o(n) space complexity the problem has stated that the array should be sorted 
// without using other space/without using extra space, with in the given array and print the distinct elements in the sorted order.
#include<iostream>
#include<algorithm>
using namespace std;
void fun(int *arr,int n){
    int i=0,j=0;
    for(i;i<n;i++){
        if(arr[i]!=arr[i+1]){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int k=0;k<j;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    cout<<" enter the elements of the array ";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    fun(arr,n);
    return 0;
}