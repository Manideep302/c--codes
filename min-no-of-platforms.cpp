#include<iostream>
using namespace std;
int main(){
    int arr[6]={840,850,800,1000,1400,1700};
    int dep[6]={1100,1020,810,1030,1800,1900};
    // brute force approach
    int maxr=0;
    for(int i=0;i<5;i++){
        int min=arr[i],max=dep[i];
        int count=1;
        for(int j=i+1;j<6;j++){
            if(arr[j]>min && arr[j]<max){
                count++;
            }
            else if(dep[j]<max && dep[j]>min){
                count++;
            }
        }
        if(count>maxr)
        maxr=count;
    }
    cout<<maxr<<" is the min required platforms";
    return 0;
}