#include<stdio.h>

using namespace std;
int main(){
long int n;
scanf("%ld",&n);
//printf("%d",n);
long int m=n/10;
if(n%10!=0)
{
    printf("1\n%d",n%10);
}
else{
    while(m>=10)
        m=m/10;
    printf("2");

}
return 0;
}
