#include<stdio.h>
#include<stack>
#include<deque>
using namespace std;
int main(){
int t,f,l;
//freopen("stpar.txt","r",stdin);
while(scanf("%d",&t))
{
if(t==0)
    break;
int gone;
int f=1,l=t;
int tr[t];
int flag=0;
deque<int> rr(t);
stack<int> route(rr);
for(int i=0;i<t;i++)
scanf("%d",&tr[i]);

for(int i=0;i<t;i++){
        flag=0;


    if(tr[i]==f)
    {
        f++;

    //if()
    while(route.top()==f){
        route.pop();
        f++;
    }
    }
   else
    {
    if(route.top()==0)
    route.push(tr[i]);
    else
    {
    if(route.top()<tr[i])
    {
        printf("no\n");
        flag=1;
        break;
    }
    else
    {
        route.push(tr[i]);
    }
    }
    }

}
if(flag==0)
    printf("yes\n");

}



return 0;
}
