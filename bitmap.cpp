#include<iostream>
#include<bits/stdc++.h>
#define I p.first
#define J p.second

using namespace std;

int dist[200][200];
char str[200][200];
int n,m;
void calculate(int i,int j){
queue<pair<int,int> > q;
dist[i][j]=0;
int a,b;
q.push(pair<int,int> (i,j));
while(!q.empty()){
    pair<int,int> p=q.front();
    q.pop();
    for(int i=0;i<4;i++){
        if(i==0)
            a=1,b=0;
        else if(i==1)
            a=-1,b=0;
        else if(i==2)
            a=0,b=1;
        else
            a=0,b=-1;
        if(str[I+a][J+b]=='0'&&(dist[I+a][J+b]==-1||dist[I][J]+1<dist[I+a][J+b])){
        dist[I+a][J+b]=dist[I][J]+1;
        q.push(pair<int,int> (I+a,J+b));
        }

        }
}

}

int main(){
int t;
scanf("%d",&t);
while(t--){
    memset(dist,-1,sizeof(dist));
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
            for(int j=0;j<m;j++){
                if(str[i][j]=='1')
                dist[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            if(str[i][j]=='1')
            calculate(i,j);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",dist[i][j]);
        printf("\n");
    }
}
return 0;
}
