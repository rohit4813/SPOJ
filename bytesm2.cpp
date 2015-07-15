#include<stdio.h>
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
//#include<cstring>
int summation[105][105];
int arr[105][105];
int h,w;
long long distance(int i,int j){

long long maxsum=0;
    int s1,s2,s3;
    if(i<0||i>=h||j<0||j>=w)
        return 0;
    if(summation[i][j]!=-1)
        return summation[i][j];
    else{


        s1=distance(i+1,j-1);
        s2=distance(i+1,j);
        s3=distance(i+1,j+1);

      //  printf("i=%d j=%d s1=%d s2=%d s3=%d max=%d  initial maxsum=%d",i,j,s1,s2,s3,max(max(s1,s2),s3),maxsum);
        if(summation[i][j]!=-1)
        maxsum=maxsum+summation[i][j]+max(max(s1,s2),s3);
        else maxsum=maxsum+arr[i][j]+max(max(s1,s2),s3);
      //  printf("final maxsum=%d\n",maxsum);
    }
    summation[i][j]=maxsum;
    return maxsum;
}
int main(){
    int t;
    long long int sum=0;
    //freopen("bytesm2.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
            sum=0;
            scanf("%d%d",&h,&w);
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        scanf("%d",&arr[i][j]);
         summation[i][j]=-1;
         }
}
/*
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        printf("%d ",summation[i][j]);
    }
    printf("\n");
}
*/
for(int j=0;j<w;j++)
(long long )distance(0,j);
/*printf("\n");
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        printf("%d ",summation[i][j]);
    }
    printf("\n");
}*/
for(int j=0;j<w;j++){
    if(summation[0][j]>sum)
        sum=summation[0][j];
}
printf("%lld\n",sum);
}
return 0;
}
