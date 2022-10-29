#include<iostream>
#include<unordered_map>
using namespace std;
//to print the elements in the same order as they preasent in array
unordered_map<int,int>mp;
void fun(int *arr,int n){
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()){
            cout<<mp.find(arr[i])->first<<":"<<mp.find(arr[i])->second<<endl;
            mp.erase(arr[i]);
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
    mp[arr[i]];
    mp[arr[i]]++;
    }
    for(auto x:mp)
    cout<<x.first<<" : "<<x.second<<endl;
    cout<<"output using function "<<endl;
    fun(arr,n);
    return 0;
}