#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int i,long long int n){
if(n==0)
    return i;
else gcd(n,i%n);
}
int main(){
int t;
long long int n;
scanf("%d",&t);
while(t--){
scanf("%lld",&n);
for(long long int i=n/2;i>=1;i--){
    long long int z=gcd(i,n);
    if(z==1){
        printf("%lld\n",i);
        break;
    }
}
}


}
