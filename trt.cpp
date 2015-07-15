#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int t;

int arr[2001]={0};
int cache[2001][2001];
int recur(int i,int j){
if(i>j)
    return 0;
    if (cache[i][j] != -1)
    return cache[i][j];
    int k=t-(j-i+1)+1;
return cache[i][j]=max(recur(i+1,j) + k*arr[i],
recur(i,j-1) + k*arr[j]);

}
int main(){
    memset(cache,-1,sizeof(cache));
cin>>t;
for(int i=0;i<t;i++){
    cin>>arr[i];
}

cout<<recur(0,t-1);

return 0;
}
