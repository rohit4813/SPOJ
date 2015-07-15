#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
int k;
int n,i;
scanf("%d",&k);
while(k--){
scanf("%d",&n);
int men[n];
int women[n];
for(i=0;i<n;i++)
        scanf("%d",&men[i]);

for(i=0;i<n;i++)
        scanf("%d",&women[i]);
int s=0;
sort(men,men+n);
sort(women,women+n);
for(i=0;i<n;i++)
        s=s+men[i]*women[i];
printf("%d\n",s);
}
return 0;
}
