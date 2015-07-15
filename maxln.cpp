#include <stdio.h>
//freopen("filename.txt","r",stdin);
using namespace std;
#include <bits/stdc++.h>
int main(){
int t;
double r;
double result;
scanf("%d",&t);
for(int i=1;i<=t;i++){
//printf("%d\n",t);
    scanf("%lf",&r);
//    r2=4*r*r;
//    result=r2+0.25;

    printf("Case %d: %.2lf\n",i,4*r*r+0.25);
}
return 0;
}
