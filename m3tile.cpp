#include<stdio.h>
using namespace std;
int recursion(int n){
if(n==0)
    return 1;
if(n==2)
    return 3;
if(n==1||n==3)
    return 0;
return 4*recursion(n-2)-recursion(n-4);
}
int main(){

int t;
while(1){
    scanf("%d",&t);
    if(t==-1)
        break;

    printf("%d\n",recursion(t));

}
return 0;
}
