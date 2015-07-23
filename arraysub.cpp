
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int *SegmentTree;

int arr[1000000];
void createSegmentTree(int low,int high,int index){
if(low==high){
    SegmentTree[index]=arr[low];
    return;
}
int m=(low+high)/2;
createSegmentTree(low,m,2*index+1);
createSegmentTree(m+1,high,2*index+2);
SegmentTree[index]=max(SegmentTree[2*index+1],SegmentTree[2*index+2]);
//printf("hello");
}
int makeQuery(int low,int high,int qlow,int qhigh,int index){
if(qhigh<low||qlow>high)
    return 0;
if(qlow<=low&&qhigh>=high)
    return SegmentTree[index];
else{
    int m=(low+high)/2;
    return max(makeQuery(low,m,qlow,qhigh,2*index+1),makeQuery(m+1,high,qlow,qhigh,2*index+2));
}
}
int main(){
int n,k,m;
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
scanf("%d",&k);

if(!(n & (n-1))){
    m=n*2-1;
//printf("power of 2:%d\n",m);
}
else{
    int h=((int)log2(n))+1;
    m=((int)pow(2,h))*2-1;

//printf("not power:%d\n",m);
}
SegmentTree=(int *)calloc(m,sizeof(int));
createSegmentTree(0,n-1,0);
//for(int i=0;i<m;i++)
//    printf("%d ",SegmentTree[i]);
//printf("\n");
for(int i=0;i+k<=n;i++)
printf("%d \n",makeQuery(0,n-1,i,i+k-1,0));
}
