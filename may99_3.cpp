#include<stdio.h>
long int gcd(long int a,long int b){
if(b==0)
    return a;
else
    gcd(b,a%b);
}
int main(){
int t;
long int x,y,z,l,s;
scanf("%d",&t);
while(t--){
scanf("%ld%ld%ld",&x,&y,&z);
l=x>y?x:y;
s=x>y?y:x;
if(z%gcd(x,y)==0&&z<=l)
printf("YES\n");
else
    printf("NO\n");
}


}
