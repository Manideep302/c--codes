#include<iostream>
using namespace std;
int parent(int i){
    return ((i-1)/2);
}
void insert(int *heap,int i){
    while(i>0 && heap[parent(i)]>heap[i]){
        swap(heap[parent(i)],heap[i]);
        i=parent(i);
    }
}
void print(int *heap){
    for(int i=0;i<11;i++)
    cout<<heap[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int heap[n];
    for(int i=0;i<n;i++){
        cin>>heap[i];
        insert(heap,i);
    }
    print(heap);
    return 0;
}