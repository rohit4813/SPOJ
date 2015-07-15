#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b){
if(b==0)
    return a;
else
    gcd(b,a%b);

}

int main(){

int t,flag;
char str[50];
//long long  int n;
scanf("%d",&t);
while(t--){
    flag=0;
    long long int n=0;
    int p=1,l;
    scanf("%s",str);
    for(l=strlen(str)-1;str[l]!='.'&&l>=0;l--){

            n+=p*(str[l]-48);
            p*=10;
            //printf("n:%d p:%d i:%d\n",n,p,i);

    }
    if(l==-1)
      printf("1\n");
    else{
    int di=strlen(str)-l;
    di--;
    long long int divide=1;
    for(int i=1;i<=di;i++)
        divide=divide*10;
    //printf("%d %d\n",divide,n);
    divide=divide/gcd(divide,n);
    printf("%lld\n",divide);
    }
    }

return 0;
}
