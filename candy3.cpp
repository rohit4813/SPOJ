#include<stdio.h>
using namespace std;
int main(){


long long int s,m,i,c,t;

scanf("%lld",&t);
while(t--)
    {
    scanf("%lld",&c);

    s=0;


            for(i=0;i<c;i++){
            scanf("%lld",&m);
            s=s+m;
            if(s>=c)
                s=s%c;
            }

if(s%c==0)
printf("YES\n");
else
printf("NO\n");
}

return 0;
}
