#include<stdio.h>
using namespace std;
int main(){

long long t,n,m;
long long s,m3,n3,n2,m2;
scanf("%lld",&t);
while(t--){
        s=0;
scanf("%lld",&n);
m=n/2;
m3=m*m*m;
m2=m*m;
n3=n*n*n;
n2=n*n;
s=s+(n3+3*n2+2*n)/6;
if(n%2==0){
    s=s+(4*m3+3*m2-m)/6;
    }
    else
        s=s+(4*m3+9*m2+5*m)/6;


printf("%lld\n",s);
}
return 0;
}
