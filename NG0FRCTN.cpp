#include<stdio.h>
#include<bits/stdc++.h>
unsigned char mask = 0x55;
using namespace std;
struct node{
long long int a,b;
};
struct node func(long long int i){

int p=log2(i);
int z=p+1;
if(!(i&(i-1))){
//    printf("i=%d 2 power\n",i);
    int p=log2(i);
    struct node x;
    x.a=1;
    x.b=p+1;
    return x;
}
else if(i==(pow(2,p+1)-1)){
  //  printf("-1\n");
    int p=log2(i);
    struct node x;
    x.a=p+1;
    x.b=1;
    return x;
}
else{
    long long int p=i/2;
    struct node q;
    q.a=0;q.b=0;
    struct node w=func(p);
    if(i==2*p){
        q.a+=w.a;
        q.b+=w.a+w.b;
    }
    else{
        q.a+=w.a+w.b;
        q.b+=w.b;
    }

    return q;
}
}
int main(){
struct node print;
long long int n;
while(1){
scanf("%lld",&n);
if(n==0)
    break;
print=func(n);
printf("%lld/%lld\n",print.a,print.b);
}

}
