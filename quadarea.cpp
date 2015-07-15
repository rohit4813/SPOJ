#include<stdio.h>
#include<bits/stdc++.h>

int main(){
int t;
double a,b,c,d;
double s,f;
scanf("%d",&t);
while(t--){
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
s=(a+b+c+d)/2;
f=(s-a)*(s-b)*(s-c)*(s-d);
s=sqrt(f);
printf("%.2lf\n",s);
}


}
