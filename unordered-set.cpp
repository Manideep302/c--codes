//unordered set uses o(1) tc because it uses hashing,ordered set uses o(n) tc because it doesnt uses hashing.
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(459);//item 1
    s.insert(558);
    s.insert(457);
    s.insert(456);
    s.insert(455);
    s.insert(455);//455 is entered twice but set/unordered set doesnt considers it ,maintains only 1 existance.
    s.insert(454);
    s.insert(453);
    s.insert(452);
    s.insert(451);
    s.insert(450);
    s.erase(450);//item 2
    if(s.find(455) != s.end())//item 3 or if(s.count(455) != 0 )
    cout<<"element is preasent ";
    else
    cout<<"element is not preasent ";
    s.emplace();//item 4 //keeps 0 reserves place ,increases the size of container/bucket
    for(auto i:s)
    cout<<i<<" ";
    cout<<"455 is preasent "<<s.count(455)<<" times";//item 5 //either return 1 or 0 no duplication of elements is allowed.
    cout<<s.size()<<"size of set";
    s.clear();//item 6//clears all the elements in the set.
    return 0;
}