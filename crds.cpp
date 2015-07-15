#include<stdio.h>
#include<math.h>

using namespace std;
int main(){
int t;
long int n;
long long int sum;
scanf("%d",&t);
while(t--){
    sum=0;
    scanf("%d",&n);
sum=(long long int)n*(3*n+1)/2;
sum=sum%1000007;

printf("%lld\n",sum);
    }
return 0;
}

