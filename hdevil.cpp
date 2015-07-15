#include<stdio.h>
#include<bits/stdc++.h>
bool mark[1001];
void fibonacci(){
int a=0,b=1,c=1;
memset(mark,false,sizeof(mark));
mark[0]=true;
mark[1]=true;
while(1){

c=a+b;
if(c>1000)
    break;
mark[c]=true;
a=b;
b=c;
}
}
long long int find_com(long long int a){
   long long  int c=0;
long long int s=sqrt(a);
for(long int i=2;i<=s;i++){
    if(a%i==0){
      //  printf("count:%d\n",c);
        if(i!=a/i){
            c+=2;
            //printf("i:%d a/i:%d count:%d\n",i,a/i,c);
            }
        else{
            c++;
            //printf("i:%d count:%d\n",i,c);

        }
        }
}

return c;
}
int main(){
int t;
fibonacci();
scanf("%d",&t);

for(int p=1;p<=t;p++){

long long int n,m,s=1;
scanf("%lld%lld",&n,&m);

for(int i=2;i*i<=n;i++){
    if(n%i==0){
        s+=i;
        if(n/i!=i)
        s+=n/i;
        if(s>=m){
        s=s%m;

    }
    }
}
long long int q=find_com(s);
q++;
//printf("s:%lld q:%lld\n",s,q);

if(mark[q]==true)
printf("Case #%d : YES.\n",p);
else
printf("Case #%d : NO.\n",p);

}
return 0;
}
