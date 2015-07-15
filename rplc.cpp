#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int t;
long long int n,s=0;
long long int a,b,q;
scanf("%d",&t);
for(int j=1;j<=t;j++){

    s=0;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++){
    scanf("%lld",&a);
    if(i==1){
        b=a;
        q=a;
    }
    else{
        b=a+b;
        if(b<q)
        q=b;
    }
    if(a>0)
        s++;

    }
if(q<0)
    q=q*(-1);
printf("Scenario #%d: ",j);
if(s==n)
printf("1\n");
else
    printf("%lld\n",q+1);
}




return 0;
}



