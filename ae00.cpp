#include<stdio.h>
using namespace std;

int main(){
int n,s=0,i,z;
scanf("%d",&n);
if(n==1){
    printf("1");
    }else{
for(i=1;i<=n;i++)
{   for(int j=i;j<=n;j++)
{
z=i*j;
    if(z<=n)
        s++;


}
}


printf("%d",s);
    }
return 0;
}
