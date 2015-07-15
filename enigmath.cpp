#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int find_gcd(long long int a,long long int b){
if(b==0)
    return a;
else
    find_gcd(b,a%b);
}
int main(){
int t;
long long int a,b,gcd,lcm;
scanf("%d",&t);
while(t--){
    scanf("%lld%lld",&a,&b);
    gcd=find_gcd(a,b);
    printf("%lld %lld\n",b/gcd,a/gcd);
}

}
