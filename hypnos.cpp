#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
//#include<math.h>
int sumofsq(int n){
int sum=0,r;
while(n>0){
    r=n%10;
    sum=sum+r*r;
    n=n/10;
}
return sum;
}
int main(){
    int mark[800];
    memset(mark,0,sizeof(mark));
    int n,c=0,first,second,flag=0;;
    scanf("%d",&n);

            first=sumofsq(n);
        while(mark[first]==0){
            mark[first]=1;
            c++;
            if(first==1){
                flag=1;
                break;
            }
            first=sumofsq(first);
        }
    if(flag==0)
        printf("-1\n");
    else printf("%d\n",c);

    return 0;
}
