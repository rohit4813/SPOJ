#include<stdio.h>
#include<bits/stdc++.h>

int main(){
int t;
long long int n,k,m;
scanf("%d",&t);
while(t--){
    scanf("%lld%lld%lld",&n,&k,&m);
    long long i=m/n;
    if(m<n)
    printf("0\n");
    else{
    float f=log(i)/log(k);
    printf("%d\n",(int)f);
    }

}
return 0;
}
