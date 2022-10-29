//not the optimised one,optimization can be done using hashing.
#include<iostream>
using namespace std;
void fun(int *arr1,int *arr2,int m,int n){
   int arr[m+n];
   int i=0;
   for(i;i<m;i++)
   arr[i]=arr1[i];
   for(int j=0;j<n;i++,j++)
   arr[i]=arr2[j];
//    remove duplicates from the arr
cout<<arr[(m+n)-1]<<" last element "<<endl;
    int a=0;
        for(int k=0;k<=((m+n)-1);k++){
            int flag=0;
            for(int j=k+1;j<((m+n)-1);j++){
                if(arr[k]==arr[j])
                flag=1;
            }
            if(flag==0){
                arr[a]=arr[k];
                a++;
            }
        }
        cout<<"the union of the given two arrays is : ";
        for(int l=0;l<a;l++)
        cout<<arr[l]<<" ";
}
int main(){
    int n1;
    cout<<"enter the size of 1st array: ";
    cin>>n1;
    int arr1[n1];
    cout<<"enter the elements of 1st array "<<endl;
    for(int i=0;i<n1;i++)
    cin>>arr1[i];
    int n2;
    cout<<"enter the size of 2nd array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"enter the elements of 2nd array "<<endl;
    for(int i=0;i<n2;i++)
    cin>>arr2[i];
    fun(arr1,arr2,n1,n2);
    return 0;
}