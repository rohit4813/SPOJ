#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n,b;
int dp[2][1005][1005];
char str[1005];
int track(int i,int b,bool flag){
if(i>=n)
    return 0;
if(dp[flag][i][b]!=0)
    return dp[flag][i][b];
//printf("i:%d b:%d flag:%d\n",i,b,flag);
//for(int i=0;i<n;i++)
//    printf("%d ",dp[flag][i][b]);
//printf("\n\n");
if(flag==true){
    if(str[i]=='E'){
    dp[flag][i][b]=2;
    }
    else if(str[i]=='0'){
    dp[flag][i][b]=min(2+track(i+1,b,false),2+track(i+1,b,true));

    }
    else{

    dp[flag][i][b]=2+track(i+1,b,true);
    }
return dp[flag][i][b];
}
else{
if(str[i]=='0'){
    dp[flag][i][b]= 1+track(i+1,b,false);

}
else if(str[i]=='E'){
    dp[flag][i][b]=1;
}
else{
if(b>0)
    dp[flag][i][b]=min(1+track(i+1,b-1,false),6+track(i+1,b,true));

else
    dp[flag][i][b]=6+track(i+1,b,true);
}
return dp[flag][i][b];
}
}

int main(){
int t;
scanf("%d",&t);
while(t--){
printf("%d",minn);
memset(dp,0,sizeof(dp));
scanf("%d%d",&n,&b);
scanf("%s",str);
//printf("%s\n",str);
printf("%d\n",track(1,b,false));
//for(int i=0;i<n;i++)
//    printf("%d ",dp[flag][i][b]);
//printf("\n");

}

}
