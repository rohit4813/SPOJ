#include<stdio.h>
#include<bits/stdc++.h>

long long int arr[1000002];
int main(){
int t;
long long int m,n;
long long int cz=0;
unsigned long long int s,sum;
scanf("%d",&t);
while(t--){
    s=0;cz=0;
    int flag=0;
    sum=0;
    long long int l=1000000000;
    scanf("%lld%lld",&n,&m);
    for(long long int i=0;i<m;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
        if(arr[i]<l)
            l=arr[i];
        if(arr[i]==0)
            cz++;

    }
    //printf("%lld %lld\n",n,m);
    if(cz==m&&n>=m)
        printf("YES\n");

    else if(l==0||n<m)
        printf("NO\n");

    else{
       // printf("sum:%u n:%d\n",sum,n);

        for(long long int i=0;i<m;i++){
        s=s+(unsigned long long)((arr[i]*n)/sum);
      //  printf("s:%u\n",s);

        }

    if(flag==1||n!=s)
        printf("NO\n");
    else
        printf("YES\n");
    }
}
return 0;
}
