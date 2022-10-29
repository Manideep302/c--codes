#include<iostream>
using namespace std;
int left(int i){
    return ((i*2)+1);
}
int right(int i){
    return ((i*2)+2);
}
void heapify(int *heap,int n,int i){
    int l=left(i);
    int r=right(i);
    int s=i;
    if(l<n && heap[l]<heap[i])
    s=l;
    if(r<n && heap[r]<heap[s])
    s=r;
    if(i!=s){
        swap(heap[s],heap[i]);
        heapify(heap,n,s);
    }
}
void print(int *heap,int n){
    for(int i=0;i<n;i++)
    cout<<heap[i]<<" ";
}
void build_heap(int *heap,int n){
    for(int i=(n/2)-1;i>=0;i--)
    heapify(heap,n,i);
}
void heapsort(int *heap,int n){
    build_heap(heap,n);
    for(int i=n-1;i>0;i--){
        swap(heap[0],heap[i]);
        heapify(heap,i,0);
    }
}
int main(){
    int n;
    cout<<" size :";
    cin>>n;
    int heap[n];
    for(int i=0;i<n;i++){
        cin>>heap[i];
    }
    heapsort(heap,n);
    print(heap,n);
    return 0;
}