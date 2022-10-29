#include<iostream>
using namespace std;
class graph{
    int v,e;
    int **adj;
    public:
    graph(int v,int e);
    void newedge(int s,int e);
    void dfs(int s, bool *v);
};
graph::graph(int v,int e){
    this->v=v;
    this->e=e;
    adj=new int*[v];
    for(int row=0;row<v;row++){
        adj[row]=new int[v];
        for(int coloumn=0;coloumn<v;coloumn++){
            adj[row][coloumn]=0;
        }
    }
}
void graph::newedge(int s,int e){
    adj[s][e]=1;
    adj[e][s]=1;
}
void graph::dfs(int s,bool *visi){
    cout<<s<<" ";
    visi[s]=true;
    for(int i=0;i<v;i++){
        if(adj[s][i]==1 && visi[i]==false)
        dfs(i,visi);
    }
}
int main(){
    int v=8,e=8;
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
    bool vis[v];
    for(int i=0;i<v;i++)
    vis[i]=false;
    g.dfs(0,vis);
    return 0;
}