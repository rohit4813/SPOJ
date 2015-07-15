#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int main(){
int test,o,t,th,f;
long long int b;
char arr[1005];
scanf("%d",&test);
while(test--){
scanf("%s",arr);
scanf("%lld",&b);
int l=strlen(arr);
int a=arr[l-1]-48;
o=a%10;
t=(o*o)%10;
th=(o*o*o)%10;
f=(o*o*o*o)%10;
if(b==0)
printf("1\n");
else if(b%4==0)
printf("%d\n",f);
else if(b%3==0)
printf("%d\n",th);
else if(b%2==0)
printf("%d\n",t);
else
printf("%d\n",o);
}
return 0;
}
