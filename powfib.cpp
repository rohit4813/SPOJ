#include<stdio.h>
#include<stdlib.h>

#define MOD 1000000007

long int *fib=(long int *)malloc(10000002*sizeof(long int));
int ifib=2;
long int a=1,b=1,c=2;
void before(){
fib[0]=1;
fib[1]=1;
while(ifib<=10000001){

    fib[ifib]=c;
    a=b;
    b=c;

   // printf("ifib:%d c:%lld fib:%lld\n",ifib,c,fib[ifib]);
    c=a+b;
    if(c>MOD)
        c=c%MOD;
    ifib++;
}
}
int main(){
before();
int t,c;
long long int n,a,b;
long long int res;
scanf("%d",&t);
while(t--){
c=1;
scanf("%lld",&n);
int z;
for(z=1;fib[z]-c<n;z++){
    c++;
    //printf("%d\n",c);
    }
a=(long long int)fib[z-1]+n-(fib[z-1]-c+1);
b=fib[n-1];
//printf("a:%lld b:%lld\n",a,b);
res=1;
while(b>0){
    if(b%2==1){
        res=res*a;
        res=res%MOD;
    }
    b/=2;
    a=a*a%MOD;
}

printf("%lld\n",res);
}
//printf("%lld\n",z);
return 0;
}
