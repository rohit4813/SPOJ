#include<stdio.h>
#include <map>
//#include <algorithm>

using namespace std;

map<int, long long> coin;

long long f(int n){
    if(n==0) return 0;

    if(coin[n]!=0) return coin[n];

    long long total=f(n/2)+f(n/3)+f(n/4);

    if(total>n)
        coin[n]=total;
    else coin[n]=n;

    return coin[n];
}

int main(){
    int n;

    while(scanf("%d",&n)==1)
        printf("%lld\n",f(n));

    return 0;
}
