#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int sum[35][35];
//int first,second;
//first=second=0;
int t;
int recur(int i,int j){
if(i>j||i<0||j<0||i>=t||j>=t)
    return 0;
    if(sum[i][j]!=0)
        return sum[i][j];
    int a=0,b=0;
    a=min(arr[i]+recur(i+2,j),arr[i]+recur(i+1,j-1));
    b=min(arr[j]+recur(i,j-2),arr[j]+recur(i+1,j-1));

    return sum[i][j]=max(a,b);
}






int recur1(int i,int j){
if(i>j||i<0||j<0||i>=t||j>=t)
    return 0;
    if(sum[i][j]!=0)
        return sum[i][j];
//printf("i:%d j:%d %d %d %d\n",i,j,first,second,bari);
    int a,b;
    a=max(arr[i]+recur1(i+2,j),arr[i]+recur1(i+1,j-1));
    b=max(arr[j]+recur1(i,j-2),arr[j]+recur1(i+1,j-1));

    //show1=first;
    //printf("i:%d j:%d %d %d\n",i,j,a,b);
    return sum[i][j]=max(a,b);
}


int main(){
int n;
scanf("%d",&n);
while(n--){
memset(sum,0,sizeof(sum));
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d",&arr[i]);
}
//
printf("%d ",recur1(0,t-1));

memset(sum,0,sizeof(sum));
printf("%d\n",recur(0,t-1));
//printf("%d %d",first,second);
}
}
