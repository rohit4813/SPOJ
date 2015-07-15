
#include <stdio.h>
using namespace std;

#include <bits/stdc++.h>

int find_gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return find_gcd(b,a%b);
}
int main(){

int t,a,b,gcd;
long long int counts,first,second;
long long int n,start,number,lcm;
scanf("%d",&t);
while(t--){
    //number=0;
    scanf("%d%d%lld",&a,&b,&n);
    gcd=find_gcd(a,b);
    lcm=(a*b)/gcd;
    first=lcm/a;
    second=lcm/b;
    counts=first+second-1;
    start=n/counts;
    number=start*lcm;
    //printf("gcd:%d lcm:%lld acount:%lld bcount:%lld total count:%lld start:%lld\n",gcd,lcm,first,second,counts,start);
    if(n<=counts){
        first=second=1;
    }
    else{
    first=first*start+1;
    second=second*start+1;
    }
    //printf("gcd:%d lcm:%lld acount:%lld bcount:%lld total count:%lld\n",gcd,lcm,first,second,counts);
    if(a==b){

        printf("%lld\n",a*n);

    }
    else{
        //int tt=;
        //printf("tt:%d\n",tt);
    for(int i=1;i<=(n%counts);i++){
        if(a*first<b*second){
            number=a*first;
            first++;
        }
        else{
            number=b*second;
            second++;
        }
    //printf("%lld\n",number);
    }
    printf("%lld\n",number);
    }

}
return 0;

}
