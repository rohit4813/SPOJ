#include<stdio.h>
//#include<math.h>
#include<bits/stdc++.h>

using namespace std;


//bool arr[10000][10000];
int main(){
int t,n,r,id,s;
//freopen("rpld.txt","r",stdin);
scanf("%d",&t);

for(int i=1;i<=t;i++){
int flag=0;
scanf("%d%d",&n,&r);
set<pair<int ,int> > m;
//memset(arr,false,sizeof(arr));
while(r--){

scanf("%d%d",&id,&s);

pair< set<pair<int,int> >::iterator ,bool > p;
p=m.insert(pair<int,int>(id,s));
if(p.second==false){
    flag=1;
}
//printf("%d\n",arr[id][s]);
}
//sort(arr.begin(),arr.end())
if(flag==0)
    printf("Scenario #%d: possible\n",i);
else
    printf("Scenario #%d: impossible\n",i);

}


}
