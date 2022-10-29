// maxsum-subarray using kadanes algorithm
#include<iostream>
using namespace std;
int kadanes(int arr[],int n){
    int max=0;
    int maxsf=0;
    for(int i=0;i<n;i++){
        if(maxsf+arr[i]>arr[i]){
            maxsf+=arr[i];
        }
        else
        maxsf=arr[i];
        if(maxsf>max)
        max=maxsf;
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<kadanes(arr,n)<<" is the max sum of the sub array";
    return 0;
}