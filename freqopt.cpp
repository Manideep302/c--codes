#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int j;
    int arr[5]={1,1,33,33,22};
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        int c=1;
        for(j=i+1;j<5;j++){
            if(arr[i]==arr[j])
            c++;
            else
            break;
        }
        cout<<arr[i]<<":"<<" "<<c<<endl;
        i=j-1;
    }
}