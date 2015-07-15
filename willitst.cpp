#include<stdio.h>
#include<bits/stdc++.h>
bool is_integer(double d){
return std::floor(d)==d;
}
int main(){
long long n;
scanf("%lld",&n);
double f=log2(n);
int d=f;
if(d==f)
    printf("TAK");
else printf("NIE");
return 0;
}
