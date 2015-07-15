#include<stdio.h>
int main(){
int t,n,zero=0;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
zero=n^zero;
}
printf("%d",zero);
return 0;
}
