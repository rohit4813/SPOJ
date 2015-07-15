#include<stdio.h>
using namespace std;

#include <bits/stdc++.h>
int arr[110][110];
int n,m;

int sum[110][110];
int rec(int i,int j){

if(i>=n||j>=m||j<0)
    return 1234;
if(sum[i][j]!=0)
    return sum[i][j];
    int a=rec(i+1,j);
    int b=rec(i+1,j-1);
    int c=rec(i+1,j+1);

sum[i][j]=arr[i][j]+min(a,min(b,c));
//for(int ii=0;ii<n;ii++){
//    for(int jj=0;jj<m;jj++)
//        printf("%d ",sum[ii][jj]);
//    printf("\n");
//}
//printf("\n");
return sum[i][j];
}
int main(){
scanf("%d%d",&n,&m);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
    }
}

memset(sum,0,sizeof(sum));
for(int j=0;j<m;j++)
    sum[n-1][j]=arr[n-1][j];
int l=INT_MAX,maxx;
for(int i=0;i<m;i++){
    maxx=rec(0,i);
    if(maxx<l)
        l=maxx;
}
printf("%d",l);

return 0;
}
