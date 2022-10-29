#include<iostream>
#include<queue>
using namespace std;
class graph{
    int v,e;
    int **adj;
    public:
    graph(int v,int e);
    void newedge (int r,int c);
    void cfs(bool *v);
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
void graph::newedge(int r,int c){
    adj[r][c]=1;
    adj[c][r]=1;
}
void graph::cfs(bool *a){
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
    for(int i=0;i<v;i++){
        ar[i]=false;
    }
    g.cfs(ar);
    return 0;
}