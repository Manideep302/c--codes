// fractional knapsack problem using greedy alogorithm
// greedy about profit.
#include<iostream>
#include<algorithm>
using namespace std;
struct item{
    float weight;
    float profit;
    float pwr;
};
bool comp(item a,item b){
    return a.pwr<b.pwr;
}
int main(){
    int n=7;
    item arr[n];
    cout<<" Insert the weights "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i].weight;
    }
    cout<<" Insert the profits "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i].profit;
        arr[i].pwr=arr[i].profit/arr[i].weight;
    }
    cout<<" Enter the capacity of the bag :";
    float w;
    cin>>w;
    float maxp=0;
    sort(arr,arr+n,comp);
    for(int i=n-1;i>=0;i--){
        if(arr[i].weight<=w && w>0){
            maxp+=arr[i].profit;
            w-=arr[i].weight;
        }
        else if(w>0 && arr[i].weight>w){
            float rp=arr[i].pwr*w;
            maxp+=rp;
            w=0;
            break;
        }
    }
    cout<<maxp<<" is the max profit can be earned"<<endl;
    return 0;
}