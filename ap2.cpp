#include<stdio.h>
using namespace std;

int main(){
int t;
scanf("%d",&t);
long long int x,y,z,n,d,a;
while(t--){

    scanf("%lld%lld%lld",&x,&y,&z);
    n=2*z/(x+y);
    printf("%lld\n",n);
    d=(y-x)/(n-5);
    a=x-2*d;
    for(int i=1;i<=n;i++)
        printf("%lld ",a+(i-1)*d);
printf("\n");
}
return 0;
}
