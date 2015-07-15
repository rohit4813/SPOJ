#include<stdio.h>
#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int main(){
int a,d;
while(scanf("%d%d",&a,&d)){
if(a==0&&d==0)
    break;
int attack[a],defend[d];
int la=INT_MAX;
int d1=INT_MAX,d2=INT_MAX;
for(int i=0;i<a;i++){
    scanf("%d",&attack[i]);
    if(attack[i]<la)
        la=attack[i];
}
int c=0;
for(int i=0;i<d;i++){
    scanf("%d",&defend[i]);
    //printf("%d\n",d1);
    if(defend[i]==d1)
        c++;
   else if(defend[i]<d1){
        d1=defend[i];
    }
}
for(int i=0;i<d;i++)
{
if(defend[i]<=d2&&defend[i]>d1){
        d2=defend[i];
}
else if(defend[i]==d1&&c!=0)
    d2=d1;
}
//printf("%d %d %d %d",d1,d2,la,c);
if(d1<=la&&d2<=la)
    printf("N\n");
else
    printf("Y\n");
}
return 0;
}
