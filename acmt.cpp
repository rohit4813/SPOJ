#include<stdio.h>
#include<math.h>
int main(){
int t;
int a,b,s,l;
scanf("%d",&t);
while(t--){
scanf("%d%d",&a,&b);
s=a>b?b:a;
l=a>b?a:b;
if(2*s-l>=0){
    int k;
    if((2*s-l)%3==0)
    k=(2*s-l)/3;
    else
    k=(2*s-l)/3 +1;
    printf("%d\n",s-k);
}
else if(l>s||l>=2)
    printf("%d\n",s);
else
    printf("0\n");
}
}
