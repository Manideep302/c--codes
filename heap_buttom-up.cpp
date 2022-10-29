#include<iostream>
using namespace std;
int left(int i){
    return((i*2)+1);
}
int right(int i){
    return((i*2)+2);
}
void heapify(int *heap,int n,int i){
    int s=i;
    int l=left(i);
    int r=right(i);
    if(l<n && heap[l]<heap[i])
    s=l;
    if(r<n && heap[r]<heap[s])
    s=r;
    if(i!=s){
        swap(heap[s],heap[i]);
        heapify(heap,n,s);
    }
}
void build_heap(int *heap,int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(heap,n,i);
    }
}
void print(int *hea,int n){
    for(int i=0;i<n;i++)
    cout<<hea[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int heap[n];
    for(int i=0;i<n;i++)
    cin>>heap[i];
    build_heap(heap,n);
    print(heap,n);
    return 0;
}