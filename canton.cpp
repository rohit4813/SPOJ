#include <stdio.h>

#include <bits/stdc++.h>
//freopen("filename.txt","r",stdin);
using namespace std;
int main(){
int t;
//freopen("cantor.txt","r",stdin);
scanf("%d",&t);
while(t--){
int m;
scanf("%d",&m);
int n=1,t;
int comp;
n=(-1+sqrt(1+8*m))/2;
comp=n*(n+1)/2;
//printf("%d",n);
t=m-comp;
//printf("%d\n",t);
printf("TERM %d IS ",m);
if(n%2==0)
{   if(t==0)
    printf("%d/%d\n",n,1);
    else
        printf("%d/%d\n",n+2-t,t);
}
else{
    if(t==0)
    printf("%d/%d\n",1,n);
 else
     printf("%d/%d\n",t,n+2-t);
}
}
return 0;
}
