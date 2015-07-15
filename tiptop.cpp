#include<stdio.h>
using namespace std;
//#define ull unsigned long long int
#include <bits/stdc++.h>
int main(){
long int t;
long long int i;
scanf("%ld",&t);
for(int j=1;j<=t;j++){
    scanf("%lld",&i);
    //printf("%llu\n",i);

    if(((long long int)sqrt(i)*(long long int)sqrt(i))==i)
        printf("Case %d: Yes\n",j);
    else
        printf("Case %d: No\n",j);

}
return 0;
}
