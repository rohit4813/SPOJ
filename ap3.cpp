#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define bint long long int
int main(){
int t;
bint x,y,s;
scanf("%d",&t);
while(t--){
scanf("%lld%lld%lld",&x,&y,&s);
long double b=7.0*x+5.0*y+2.0*s;
long double a=x+y;
long double c=12.0*s;
//printf("sq:%lf r:%lf sqrt:%lf\n",x7,r,sqrt);
long double sq=sqrtl(b*b-4.0*a*c);
bint sqr=llrint(sq);
long double ans=(b+sqr)/(2.0*a);
//printf("%lf\n",ans);
bint n=llrint(ans);
long double d=(y-x)/(n-6.0);
//printf("%lf\n",d);
bint dd=llrint(d);
long double A=x-2*dd;
bint AA=llrint(A);
printf("%lld\n",n);
for(bint i=0;i<n;i++){
printf("%lld ",AA+i*dd);
}
printf("\n");
}
return 0;
}
