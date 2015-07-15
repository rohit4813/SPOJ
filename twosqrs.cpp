#include<stdio.h>
#include<bits/stdc++.h>
int main(){

int t,flag=0;
long long int p;
long long int f,l;
long long int n,i;
scanf("%d",&t);
while(t--){
    flag=0,p=0;
    scanf("%lld",&n);
    //printf("%lld",n);

         for(i=floor(sqrt(n));i>=0;i--){
            //printf    ("%d\n",i);
            p=(long long )n-i*i;
            l=floor(sqrt(p));
        //   printf("%lld %d %d\n",p,i,l);
            if((long long)l*l==p){
                flag=1;
                break;
            }

         }

    if(flag==0)
    printf("No\n");
    else printf("Yes\n");
    }

return 0;
}


