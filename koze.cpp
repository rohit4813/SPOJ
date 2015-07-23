#include<bits/stdc++.h>
#define I p.first
#define J p.second
char str[255][255];
bool dist[255][255];
using namespace std;
int sheep=0,wolves=0;

int n,m;
void calculate(int i,int j){
int s=0,w=0;
queue<pair<int,int> > q;
dist[i][j]=true;
int a,b,flag=0;
q.push(pair<int,int> (i,j));
while(!q.empty()){
    pair<int,int> p=q.front();
    q.pop();
    if(str[p.first][p.second]=='k')
        s++;
    else if (str[p.first][p.second]=='v')
        w++;
    for(int i=0;i<4;i++){
        if(i==0)
            a=1,b=0;
        else if(i==1)
            a=-1,b=0;
        else if(i==2)
            a=0,b=1;
        else
            a=0,b=-1;
        if(I+a<=n-1&&I+a>=0&&J+b>=0&&J+b<=m-1&&str[I+a][J+b]!='#'&&dist[I+a][J+b]==false){
        q.push(pair<int,int> (I+a,J+b));
        dist[I+a][J+b]=true;
        if(I+a==0||I+a==n-1||J+b==0||J+b==m-1)
            flag=1;
        }

        }
}
if(flag==0){
    if(s>w)
        sheep+=s;
    else
        wolves+=w;
}
else{
    sheep+=s;
    wolves+=w;
}

}
int main(){
scanf("%d%d",&n,&m);
memset(dist,0,sizeof(dist));
for(int i=0;i<n;i++)
    scanf("%s",str[i]);
for(int i=1;i<n-1;i++){
    for(int j=1;j<m;j++){
        if(dist[i][j]==false&&str[i][j]!='#'){
            calculate(i,j);
          //  printf("i:%d j:%d %d %d\n",i,j,sheep,wolves);
        }
    }
}
printf("%d %d\n",sheep,wolves);
return 0;
}
