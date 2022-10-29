#include<iostream>
using namespace std;
struct que{
    int maxsize;
    int front;
    int current;
    int rear;
    int *arr;
};
que *create(int siz){
    que *aq=new que;
    aq->maxsize=siz;
    aq->front=aq->current=0;
    aq->rear=aq->maxsize-1;
    aq->arr=new int[siz];
    return aq;
}
void enque(que *ab,int s){
    if(ab->current > ab->maxsize)
    cout<<"its full"<<endl;
    else{
    ab->rear=(ab->rear+1)%ab->maxsize;
    ab->arr[ab->rear]=s;
    ab->current=ab->current+1;
    cout<<"enqued"<<endl;
    }
}
void deque(que *c){
    if(c->current <=0)
    cout<<"empty que"<<endl;
    else{
        int it=c->arr[c->front];
        c->front=(c->front+1)% c->maxsize;
        cout<<it<<" is dequed"<<endl;
    }
}
int main(){
    que *a;
    a=create(8);
    enque(a,1);
    enque(a,2);
    enque(a,3);
    enque(a,4);
    enque(a,5);
    enque(a,6);
    enque(a,7);
    enque(a,8);
    deque(a);
    deque(a);
    deque(a);
    deque(a);
    deque(a);
    enque(a,6);
    enque(a,7);
    enque(a,8);
    deque(a);
    deque(a);
    deque(a);
    deque(a);
    deque(a);
    return 0;
}