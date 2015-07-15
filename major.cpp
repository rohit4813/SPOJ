#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
int t;
long long q,n,show,s=0;
scanf("%d",&t);
while(t--){

map<int,int> check;
        s=0;
scanf("%lld",&n);
for(long long int i=0;i<n;i++){
    scanf("%lld",&q);
    check[q]++;
 //   printf("%d\n",check[q]);
    if(check[q]>n/2){
     check[q]=-1234567;
        s++;
        show=q;
    }
}
if(s==0)
    printf("NO\n");
else
    printf("YES %lld\n",show);
}

return 0;
}
