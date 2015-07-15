#include<stdio.h>
#include<bits/stdc++.h>

int main(){
int t;
unsigned long long int a,b,c;
unsigned long long int s;
scanf("%d",&t);
while(t--){
scanf("%llu%llu%llu",&a,&b,&c);
s=a*a-2*b;
printf("%llu\n",s);
}

}
