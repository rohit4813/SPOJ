#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,l,n;
freopen("stamps.txt","r",stdin);
long long sum;
scanf("%d",&t);
for(int z=1;z<=t;z++){
        sum=0;
scanf("%d%d",&l,&n);
int bff[n+1];
for(int i=0;i<n;i++){
    scanf("%d",&bff[i]);
    sum=sum+bff[i];
}
if(l>sum)
    printf("Scenario #%d:\nimpossible\n",z);
else if(sum==l)
    printf("Scenario #%d:\n%d\n",z,n);
else{
    sort(bff,bff+n);
sum=0;int i=n-1;
while(sum<l&&i>=0){
    sum=sum+bff[i--];
}
    printf("Scenario #%d:\n%d\n",z,n-i-1);

}
printf("\n");
}
return 0;
}
