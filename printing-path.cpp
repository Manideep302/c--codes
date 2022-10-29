#include<iostream>
#include<vector>
using namespace std;
class graph{
    int v,e;
    int **adj;
    public:
    graph(int v,int e);
    void create_new(int s,int e);
    bool print(int s,bool *arr,int se,bool status);
};
graph::graph(int v,int e){
    this->v=v;
    this->e=e;
    adj=new int*[v];
    for(int i=0;i<v;i++){
        adj[i]=new int[v];
        for(int j=0;j<v;j++){
            adj[i][j]=0;
        }
    }
}
void graph::create_new(int s,int e){
    adj[s][e]=1;
    adj[e][s]=1;
}
vector<int>ans;
bool graph::print(int s,bool *arr,int se,bool status){
    if(s==se){
        ans.push_back(s);
        status=true;
        return status;
    }
    arr[s]=true;
    for(int i=0;i<v;i++){
        if(adj[s][i]==1 && arr[i]==false && status==false)
        status=print(i,arr,se,status);
        if(status){
        ans.push_back(s);
        return status;
        }
    }
    if(s==0 && status == true){
        for(auto x:ans)
        cout<<x<<" ";
    }
}
int main(){
    int v=8,e=8;
    graph g(v,e);
    g.create_new(0,0);
    g.create_new(0,1);
    g.create_new(1,2);
    g.create_new(2,3);
    g.create_new(3,4);
    g.create_new(4,5);
    g.create_new(5,6);
    g.create_new(6,7);
    g.create_new(7,0);
    bool vis[v];
    for(int i=0;i<v;i++)
    vis[i]=false;
    g.print(0,vis,2,false);
    return 0;
}