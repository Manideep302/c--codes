#include<iostream>
#include<list>
using namespace std;
struct haash{
    int bucket;
    list<int>*l;
    haash(int b){
        bucket=b;
        l=new list<int> [b];
    }
    void insert(int b){
        int i=b%bucket;
        l[i].push_back(b);
    }
    bool search(int b){
        int i=b%bucket;
        for(auto x:l[i]){
            if(x == b)
            return true;
        }
    return false;
    }
    void remove(int b){
        int i=b%bucket;
        l[i].remove(b);
    }
};
int main(){
    haash h(20);
    h.insert(25);
    h.insert(45);
    h.insert(65);
    h.remove(45);
    h.search(45)?cout<<" 45 is still preasent ":cout<<" 45 is no longer exists ";
    return 0;
}