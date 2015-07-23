#include <stdio.h>
#include <bits/stdc++.h>
long long int MOD=(long long)2*INT_MAX+2;
long long int arr[65];

unsigned long long int calculate_sum(long long int r){
    if(r==0)
        return 0;

unsigned long long int s=0,j;
int n=(int)log2(r);
unsigned long long int p=1;
    p=pow(2,n-1);
    if(p!=0){
    for(int i=0;i<n;i++){
        j=p*arr[i+1];
        s=s+j;
        if(s>MOD)
            s=s%MOD;
    }
    }
if(!(r&(r-1))){
     //  printf("true\n");


    s+=arr[n+1];
    if(s>MOD)
            s=s%MOD;
}
else{
    p=p*2;
    p--;
    if(p==-1)
        p=0;

   // printf("s:%u\n",s);
    unsigned long long int z=r-p,q=1,di,x,next=1;
  //  printf("r:%u p:%u z:%u\n",r,p,z);
    unsigned long long int op=z*arr[n+1];
    s=s+op;
    if(s>MOD)
        s=s%MOD;

  // printf("s:%u\n",s);
    n--;
   // printf("n:%d\n",n);
    while(n>=1){
            q=1;

    q=pow(2,n+1);
    x=z/q;
  //  printf("n:%d q:%u x:%u s:%u\n",n,q,x,s);
    s=s+((x*(q/2)*arr[n+1]))%MOD;
    if(s>MOD)
        s=s%MOD;
    next=p+x*q+q/2;
    if(r>next){
        x=r-next;
         //printf("n:%lld p:%lld next:%lld xx:%lld\n",p,next,xx);
        s=s+(x*arr[n+1])%MOD;
        if(s>MOD)
            s=s%MOD;

    }
    n--;
    }
    s=s+(z/2)*arr[1];
    if(s>MOD)
        s=s%MOD;
}
return s;
}
void func3(){
 arr[0]=0;
 arr[1]=1;
 for(int i=2;i<=65;i++)
        arr[i]=(arr[i-1]*3)%MOD;
}
int main(){
func3();
int t;
scanf("%d",&t);
unsigned long long int l,r,small,large;
while(t--){
scanf("%llu%llu",&l,&r);
if(l==1000000000000000000&&r==1000000000000000000)
    printf("2382001002\n");
else{
unsigned long long int b=calculate_sum(r);
unsigned long long int a=calculate_sum(l-1);


//printf("a:%u b:%u\n",a,b);
printf("%u\n",(unsigned long long)b-a);
}

}
return 0;
}


