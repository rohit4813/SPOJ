#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,p;
scanf("%d",&p);
long int arr[3003];
while(p--){
scanf("%d%d",&n,&t);

for(int i=0;i<n;i++)
    scanf("%ld",&arr[i]);
long int profit[2][t+1];
long int s[2][t+1];
for(int i=0;i<n;i++){

    for(int k=0;k<=t;k++){
    if(i==0)
    profit[0][k]=0,s[0][k]=INT_MIN;
    else if(k==0)
    profit[i&1][0]=0,s[i&1][0]=INT_MIN;
    else{
        //printf("i:%d k:%d profit[i-1][k-1]:%d arr[i-1]:%d s[i-1][k]:%d\n",i,k,profit[(i-1)&1][k-1],arr[i-1],s[(i-1)&1][k]);
        s[i&1][k]=max(profit[(i-1)&1][k-1]-arr[i-1],s[(i-1)&1][k]);
      //printf("s[i][k]:%d\n",s[i&1][k]);
        //int s=INT_MIN;
        profit[i&1][k]=max(profit[(i-1)&1][k],s[i&1][k]+arr[i]);

    }
//     for(int l=0;l<=t;l++)
//            printf("%d ",profit[0][l]);
//        printf("\n\n");
//         for(int l=0;l<=t;l++)
//            printf("%d ",profit[1][l]);
//        printf("\n\n");
    }

}
printf("%ld\n",profit[(n-1)&1][t]);
}
return 0;
}
