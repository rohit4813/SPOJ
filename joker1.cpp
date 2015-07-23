#include<stdio.h>
#include<bits/stdc++.h>
long long int MOD=1000000007;
int main(){
int t,n;
int arr[70];
scanf("%d",&t);

unsigned long long int m=1,ss=0;
while(t--){
        m=1,ss=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
std::sort(arr,arr+n);
m=m*arr[0];
int flag=0;
for(int i=1;i<n;i++){
    m=m*(arr[i]-i);
    if(m<=0){
        flag=1;
        break;
    }
    if(m>MOD)
    m=m%MOD;
    }

if(flag==0)
printf("%u\n",m);
else
   printf("0\n");

}
printf("KILL BATMAN\n");
return 0;
}
