#include<stdio.h>
int main(){
int t,n,c=0;
long long int j,s=0,start;

    int flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%lld",&j);
    if(i==0)
        start=j;
    if(i!=0)
        if(j>start+1||j<start-1)
        flag=1;
    if(j>=n||j<0)
        flag=1;
    if(j==0)
        c++;
    s+=j;

    }
    if(s%(n-1)!=0||c>1)
        flag=1;

    if(c==n)
        printf("0\n");
    else if(flag==1)
        printf("-1\n");
    else
    printf("%lld\n",s/(n-1));

return 0;
}



