//unordered maps uses o(1) tc because it uses hashing,ordered maps uses o(n) tc because it doesnt uses hashing.
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> m;
    m[1]="hello";//key=1,value=hello
    m.insert({2,"manideep"});//dont forget to use {key,value}
    for(auto x:m)
    cout<<"key = "<<x.first<<" value = "<<x.second<<endl;
    //to find the value of a given key
    if(m.find(2) != m.end()){
        cout<<m.find(2)->second<<" is the value of the given key "<<m.find(2)->first<<endl;
    }
    else
    cout<<"the given key is not found"<<endl;
    m.erase(1);
    if(m.find(1) != m.end())
    cout<<m.find(1)->first<<" is found";
    else
    cout<<"the key is not found"<<endl;
    m.insert({1,"hello"});
    m.insert({3,"we"});
    m.insert({4,"are"});
    m.insert({5,"learning"});
    m.insert({6,"hashing"});
    cout<<"printing all the elements in the map "<<endl;
    for(auto x:m)
    cout<<"key is "<<x.first<<" value is "<<x.second<<endl;
    cout<<m.size()<<" size of map "<<endl;
    return 0;
}