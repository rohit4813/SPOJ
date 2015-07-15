#include<stdio.h>
//#include<math.h>
#include<bits/stdc++.h>

using namespace std;

vector<int > e[10005];
bool mark[10005];
int maxx=0,l=0;
void depth(int v,int s){

//printf("v:%d\n",v);
if(e[v].empty())
    return;
mark[v]=true;

//printf("v:%d s:%d\n",v,s);
//printf("*v:%d visited:%d\n",v,mark[v]);
for(vector<int>:: iterator it=e[v].begin();it!=e[v].end();it++){
//printf("*it:%d visited:%d\n",*it,mark[*it]);
if(mark[*it]==false){

//mark[*it]=true;
//printf("inside *it:%d visited:%d\n",*it,mark[*it]);
depth(*it,s+1);
//if()
//printf("v:%d *it:%d path[v][*it]:%d\n",v,*it,s);
}
}

if(s>maxx)
    maxx=s,l=v;
return;


}
int main(){
    int n,u,v,r,f=0;
    freopen("pt07z.txt","r",stdin);
    scanf("%d",&n);
    if(n<=1)
        printf("0\n");
    else{
    while(--n){
        scanf("%d%d",&u,&v);
        if(f==0)
            r=u,f=1;
        e[u].push_back(v);
        e[v].push_back(u);
    }

    memset(mark,false,sizeof(mark));
    depth(r,0);

   // printf("%d\n",l);
    maxx=0;
    memset(mark,false,sizeof(mark));
    depth(l,0);
    printf("%d\n",maxx);
    }
    return 0;
}
