#include<stdio.h>
using namespace std;
int main(){
int t,n,m,d,h,c=0;
scanf("%d",&t);
while(t--){
c=0;
scanf("%d%d%d",&n,&m,&d);
while(n--){
scanf("%d",&h);
if(h%d==0)
    c+=h/d-1;
else
    c+=h/d;
}
if(c>=m)
    printf("YES\n");
else
    printf("NO\n");
}
}
