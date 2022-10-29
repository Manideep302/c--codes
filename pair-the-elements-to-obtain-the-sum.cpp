#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int sum;
    cout<<"enter the sum to be obtained : ";
    cin>>sum;
    int arr[n];
    cout<<"enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i]) !=s.end())
        cout<<arr[i]<<","<<sum-arr[i]<<endl;
        s.insert(arr[i]);
    }
    return 0;
}