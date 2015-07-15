#include<stdio.h>
using namespace std;
int main(){
int t;

while(scanf("%d",&t))
{
    if(t==0)
        break;
int a[t+1];
a[0]=0;
int flag=0;
for(int i=1;i<=t;i++)
    scanf("%d",&a[i]);
for(int i=1;i<=t;){
    if(a[i]==i)
        i++;
    else {
    int k=a[i];
    if(i==a[k])
        i++;
    else
    {
        printf("not ambiguous\n");
        flag=1;
        break;
    }
    }
}
if(flag==0)
    printf("ambiguous\n");
}


return 0;
}
