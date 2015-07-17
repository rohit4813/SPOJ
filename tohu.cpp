
#include<stdio.h>
int main(){
int t;
long int n;
double s;
scanf("%d",&t);
while(t--){
    s=0;
    scanf("%ld",&n);
    s=3.0/4 + 1.0/(2*(n+2)) - 1.0/(2*(n+1));
    printf("%.11lf\n",s);
}

return 0;
}
