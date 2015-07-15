#include<stdio.h>
using namespace std;
#include<math.h>
int main(){
long long g;
int b;
while(scanf("%lld%d",&g,&b)){
    if(g==-1&&b==-1)
        break;
    if(g==0)
        printf("%d\n",b);
    else if (b==0)
        printf("%lld\n",g);
    else if(g==b||g==b+1||b==g+1)
        printf("1\n");
    else{
        if(g>b){
            if(g%(b+1)==0)
            printf("%lld\n",(g/(b+1)));
       else
            printf("%lld\n",1+(g/(b+1)));
        }
        else{
            if(b%(g+1)==0)
            printf("%d\n",(b/(g+1)));
       else
            printf("%d\n",1+(b/(g+1)));
      }}
}
return 0;
}
