#include<stdio.h>
int main(){
int n;
while(1){
    scanf("%d",&n);
    if(n==0)
        break;
    printf("%lld\n",(long long)5+4*(n-1)+((n-1)*(6+(n-2)*3))/2);
}


}
