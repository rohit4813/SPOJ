#include <stdio.h>
#include<math.h>
using namespace std;
int main(){
int a,b,c,ap,gp;

while(scanf("%d%d%d",&a,&b,&c))
{
if(a==0&&b==0&&c==0)
    break;
else
{
if((b-a)==(c-b)&&(b-a)!=0)
printf("AP %d\n",c+(b-a));
else
printf("GP %d\n",c*b/a);

}
}
return 0;
}
