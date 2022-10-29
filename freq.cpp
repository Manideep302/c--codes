#include<iostream>   //brute force approach,for optimised approach sort the array.
using namespace std;
int main(){
    int n=5;
    int arr[5]={2,2,5,2,2};
    for(int i=0;i<n;i++){
        int flag=0;
        int c=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        continue;
        else{
            for(int j=0;j<i;j++){
                if(arr[i]==arr[j])
                c++;
            }
        }
        cout<<arr[i]<<" "<<":"<<c<<endl;
    }
    return 0;
}