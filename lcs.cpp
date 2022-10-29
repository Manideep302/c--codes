#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int fun(char *str1,char *str2){
    if(str1[0]=='\0' || str2[0]=='\0')
    return 0;
    if(str1[0]==str2[0]){
        return 1+fun(str1+1,str2+1);
    }
    else{
        int a=fun(str1+1,str2);
        int b=fun(str1,str2+1);
        int c=a>b?(a):(b);
        return c;
    }
}

// optimization using dp
int step2(char *str1,char *str2,int **mat,int s1,int s2){
    if(s1==0||s2==0)
    return 0;
    if(mat[s1][s2]>-1)
    return mat[s1][s2];
    else if(str1[0]==str2[0])
    mat[s1][s2]=1+step2(str1+1,str2+1,mat,s1-1,s2-1);
    else{
        int l1=step2(str1+1,str2,mat,s1-1,s2);
        int l2=step2(str1,str2+1,mat,s1,s2-1);
        mat[s1][s2]=max(l1,l2);
    }
    return mat[s1][s2];
}
int step1(char *str1,char *str2){
    int m=strlen(str1);
    int n=strlen(str2);
    int **mat=new int*[m+1];
    for(int i=0;i<=m;i++){
        mat[i]=new int[n+1];
        for(int j=0;j<=n;j++)
        mat[i][j]=-1;
    } 
    int len=step2(str1,str2,mat,m,n);
    for(int i=0;i<=m;i++)
    delete[] mat[i];
    delete mat;
    return len;
}
int main(){
    char s1[]="AEETAB";char s2[]="EWTWAYB";
    cout<<fun(s1,s2)<<" is the longest length of the common sub-sequence"<<endl;
    cout<<step1(s1,s2)<<" using optimization dynamic programming";
    return 0;
}