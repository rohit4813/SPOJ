#include <stdio.h>
#include <cstring>
using namespace std;

void setm(long int n);
bool isPrime(unsigned long n) {
    if (n <= 3) {
        return n > 1;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (unsigned short i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
bool arr[200];
void Sieve()
{   for(long int i=1;i<sizeof(arr);i++){
        if(arr[i]==0)
        {
            setm(i+1);
        }


}
}
void setm(long int n)
{long int m;
    for(int q=2;(m=n*q)<=sizeof(arr);q++){
        arr[m-1]=1;
    }
}
int main(){
memset(arr,0,sizeof(arr));
    arr[0]=1;
unsigned long int n,i,a,b,q;
Sieve();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d%d",&a,&b);
int flag;
    for(q=a;q<=b;q++)
    {
        flag=0;/*
        for(int i=2;i<=200;i++){
            if(arr[i-1]==0)
            {
                if(q%i==0)
                {   flag=1;
                    break;
                }
            }
        }
    if(flag){*/
        if(isPrime(q))
            printf("%d\n",q);


    }
}

return 0;
}


