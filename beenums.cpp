#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int main(){
int n;
while(scanf("%d",&n)){
    if(n==-1)
        break;
    float z=(n-1)/3.0;
if(floor(z)!=z)
    printf("N\n");
else{
    float b=sqrt(1+4*z);
    float a=(-1+b)/2;
    if(floor(a)==a)
        printf("Y\n");
    else printf("N\n");
}
}


return 0;
}
