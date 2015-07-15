#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int r,c,maxx,maxx_i,maxx_j;
char str[1001][1001];
int dp[1001][1001];
bool mark[1001][1001];
void recur(int i,int j,int k){
//printf("i:%d j:%d str:%c\n",i,j,str[i][j]);

if(i>=r||j>=c||i<0||j<0)
    return;
if(str[i][j]=='#'){
   // printf("i:%d j:%d block\n",i,j);
    return;
}
if(dp[i][j]!=-1){
   // printf("i:%d j:%d dp[i][j]:%d\n",i,j,dp[i][j]);
    return;
}
if(mark[i][j]==false){

mark[i][j]=true;
recur(i+1,j,k+1),recur(i,j+1,k+1),recur(i-1,j,k+1),recur(i,j-1,k+1);
dp[i][j]=k;

mark[i][j]=false;

}
//for(int i=0;i<r;i++){
//    for(int j=0;j<c;j++)
//        printf("%d ",dp[i][j]);
//    printf("\n");
//}
if(dp[i][j]>maxx)
    maxx=dp[i][j],maxx_i=i,maxx_j=j;

}

int main(){
int t,check=0;
scanf("%d",&t);
while(t--){
scanf("%d%d",&c,&r);
for(int i=0;i<r;i++)
scanf("%s",str[i]);
maxx=0;
memset(dp,-1,sizeof(dp));
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
     //   printf("in loop\n");
        if(str[i][j]=='.'){
            recur(i,j,0);
            break;
    }
}
}

memset(dp,-1,sizeof(dp));
//printf("%d %d\n",maxx_i,maxx_j);
recur(maxx_i,maxx_j,0);
printf("Maximum rope length is %d.\n",maxx);



}

return 0;
}

