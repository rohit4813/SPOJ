#include<stdio.h>
using namespace std;

#include <bits/stdc++.h>
int gcd(int a,int b){
if(b==0)
    return a;
else
    gcd(b,a%b);
}
int find_com(int a){
    int c=0;
int s=sqrt(a)+1;
for(int i=1;i<s;i++){
    if(a%i==0){
        if(i!=a/i)
            c+=2;
        else
            c++;
        }
}

return c;
}

int main(){

int t,a,b,n;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&a,&b);
    if(a==1||b==1)
        printf("1\n");
    else {
        if(a==b){
        n=find_com(a);
        }
    else{
        int x=gcd(a,b);
        n=find_com(x);
        }
    printf("%d\n",n);
    }
}

return 0;
}
