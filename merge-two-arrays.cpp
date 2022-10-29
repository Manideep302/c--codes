#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
void  fun(int *arr1,int *arr2,int n1,int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }
        if(arr1[i]>arr2[j]){
            v.push_back(arr2[j]);
            j++;
        }
        if(arr1[i]==arr2[j]){
            v.push_back(arr1[i]);
            v.push_back(arr2[j]);
            i++;j++;
        }
    }
    while(i<n1){
        v.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        v.push_back(arr2[j]);
        j++;
    }
}
int main(){
    int n1,n2;
    cout<<"enter the size of 1st array "<<endl;
    cin>>n1;
    cout<<"enter the size of 2nd array "<<endl;
    cin>>n2;
    cout<<"enter the elements of 1st array "<<endl;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    cin>>arr1[i];
    cout<<"enter the elements of 2nd array "<<endl;
    for(int i=0;i<n2;i++)
    cin>>arr2[i];
    fun(arr1,arr2,n1,n2);
    cout<<" The final merged array is :";
    for(auto i:v)
    cout<<i<<" ";
    return 0;
}