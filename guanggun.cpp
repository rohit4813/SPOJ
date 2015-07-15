#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
while(scanf("%lld",&n)!=EOF){
        int l=n%9;

        //long long int m=(n/10);
        n=n/9;

        unsigned long long int t=81*n;
        printf("%llu\n",t+l+l*(l-1));
        }





return 0;
}
