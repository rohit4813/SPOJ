#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int t;
unsigned long long int s=0;
while(1){
    s=0;
scanf("%d",&t);
if(t==0)
    break;
long long int stu[t],price[t];
for(int i=0;i<t;i++){
scanf("%lld",&stu[i]);
}

for(int i=0;i<t;i++){
scanf("%lld",&price[i]);
}
std::sort(stu,stu+t);
std::sort(price,price+t);
for(int i=0;i<t;i++){
s+=stu[t-i-1]*price[i];
}
printf("%llu\n",s);
}
return 0;
}
