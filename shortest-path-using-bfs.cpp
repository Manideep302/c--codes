#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class graph{
    public:
    int v,e;
    int **adj;
    public:
    graph(int v,int e);
    void newedge(int s,int en);
    void bfs(bool *arr);
    void sp(int a,bool *ar);
};
graph::graph(int v,int e){
    this->v=v;
    this->e=e;
    adj=new int*[v];
    for(int i=0;i<v;i++){
        adj[i]=new int[v];
        for(int j=0;j<v;j++)
        adj[i][j]=0;
    }
}
void graph::newedge(int sv,int ev){
    adj[sv][ev]=1;
    adj[ev][sv]=1;
}
void graph::bfs(bool *a){
    queue<int> q;
    q.push(0);
    a[0]=true;
    while(!(q.empty())){
        cout<<q.front()<<" ";
        for(int i=0;i<v;i++){
            if(adj[q.front()][i]==1 && a[i]==false){
                q.push(i);
                a[i]=true;
            }
        }
        q.pop();
    }
}
void graph::sp(int a,bool *ar){
    unordered_map<int,int>mp;
    queue<int>q;
    q.push(0);
    while(!(q.empty())){
        for(int i=0;i<v;i++){
            if(adj[q.front()][i]==1 && ar[i]==false){
                q.push(i);
                ar[i]=true;
                mp[i]=q.front();
            }
        }
        q.pop();
     }
    while(mp.find(a)->second !=0){
        cout<<mp.find(a)->second<<" "<<endl;
        mp[a]=mp.find(mp.find(a)->second)->second;
    }
    cout<<0<<endl;
}
int main(){
     int v=8,e=10;
    graph g(v,e);
    g.newedge(0,0);
    g.newedge(0,1);
    g.newedge(1,2);
    g.newedge(2,3);
    g.newedge(3,4);
    g.newedge(4,5);
    g.newedge(5,6);
    g.newedge(6,7);
    g.newedge(7,0);
    bool ar[v];
    for(int i=0;i<v;i++)
    ar[i]=false;
    cout<<"bfs is: ";
    g.bfs(ar);
    for(int i=0;i<v;i++)
    ar[i]=false;
    cout<<"shortest path for 4 from 0 is : "<<endl;
    g.sp(4,ar);
    return 0;
}