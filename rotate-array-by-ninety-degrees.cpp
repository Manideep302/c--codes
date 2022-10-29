// rotate the array by 90 degress
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            temp.push_back(arr[j][i]);
        }
        reverse(temp.begin(),temp.end());
        v.push_back(temp);
    }
    cout<<"the 90 degrees rotated array is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}