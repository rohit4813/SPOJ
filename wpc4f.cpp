#include<stdio.h>
using namespace std;

#include <bits/stdc++.h>
int n;
int arr[20][3];
int sum[20][3];

int recursion(int i,int x){
if(i==n-1){
    sum[i][x]=arr[i][x];
    return sum[i][x];
}

if(sum[i][x]!=-1)
    return sum[i][x];

long long int s=0;
s=s+arr[i][x]+min(recursion(i+1,(x+1)%3),recursion(i+1,(x+2)%3));
sum[i][x]=s;
//printf("i:%d x:%d\n",i,x);
//for(int i=0;i<n;i++)
//    printf("%d %d %d\n",sum[i][0],sum[i][1],sum[i][2]);
//printf("\n");
return sum[i][x];
}
int main(){
int t;
scanf("%d",&t);
while(t--){
memset(sum,-1,sizeof(sum));
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d%d%d",&arr[i][0],&arr[i][1],&arr[i][2]);
}
printf("%d\n",min(recursion(0,0),min(recursion(0,1),recursion(0,2))));
}
return 0;
}
