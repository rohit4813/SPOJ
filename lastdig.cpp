#include<stdio.h>
using namespace std;
int main(){
    int a,o,test,t,th,f;
    long int b;
    scanf("%d",&test);
   // int res,inter;
    while(test--){
    scanf("%d%ld",&a,&b);
    o=a%10;
    t=(o*o)%10;

    th=(o*o*o)%10;

    f=(o*o*o*o)%10;
    if(b==0)
        printf("1\n");
    else if(b%4==0)
        printf("%d\n",f);
    else if(b%3==0)
        printf("%d\n",th);
    else if(b%2==0)
        printf("%d\n",t);
    else
        printf("%d\n",o);

}

        return 0;
}
