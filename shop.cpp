#include<stdio.h>
#include<bits/stdc++.h>
#define I pq.first
#define J pq.second

using namespace std;
int w,h,s_i,s_j,d_i,d_j;
int dist[26][26];
char str[26][26];
bool mark[26][26];
//bool operator <(const pair<int,int> & p,const pair<int,int> & q){
//return dist[p.I][p.J]<=dist[q.I][q.J];
//}
void recur(int i,int j){
queue<pair<int,int> > q;
pair<int,int> p(i,j);
q.push(p);
dist[p.first][p.second]=0;
while(!q.empty()){
    pair<int,int> pq=q.front();
    q.pop();
    if((str[I+1][J]>=48&&str[I+1][J]<=57)){
        if(dist[I+1][J]==-1||(dist[I][J]+(str[I+1][J]-48)<dist[I+1][J])){
            dist[I+1][J]=dist[I][J]+(str[I+1][J]-48);
            pair<int,int> o(I+1,J);
            q.push(o);
        }
    }
    if((str[I-1][J]>=48&&str[I-1][J]<=57)){
        if(dist[I-1][J]==-1||(dist[I][J]+(str[I-1][J]-48)<dist[I-1][J])){
            dist[I-1][J]=dist[I][J]+(str[I-1][J]-48);
            pair<int,int> o(I-1,J);
            q.push(o);
        }
    }
    if((str[I][J+1]>=48&&str[I][J+1]<=57)){
        if(dist[I][J+1]==-1||(dist[I][J]+(str[I][J+1]-48)<dist[I][J+1])){
            dist[I][J+1]=dist[I][J]+(str[I][J+1]-48);
            pair<int,int> o(I,J+1);
            q.push(o);
        }
    }
    if((str[I][J-1]>=48&&str[I][J-1]<=57)){
        if(dist[I][J-1]==-1||(dist[I][J]+(str[I][J-1]-48)<dist[I][J-1])){
            dist[I][J-1]=dist[I][J]+(str[I][J-1]-48);
            pair<int,int> o(I,J-1);
            q.push(o);
        }
    }
    if(str[I+1][J]=='D'){
        if(dist[I][J]<dist[I+1][J])
            dist[I+1][J]=dist[I][J];
    }

    if(str[I-1][J]=='D'){
        if(dist[I][J]<dist[I-1][J])
            dist[I-1][J]=dist[I][J];
    }

    if(str[I][J+1]=='D'){
        if(dist[I][J]<dist[I][J+1])
            dist[I][J+1]=dist[I][J];
    }

    if(str[I][J-1]=='D'){
        if(dist[I][J]<dist[I][J-1])
            dist[I][J-1]=dist[I][J];
    }
}
}
int main(){
while(1){
    scanf("%d%d",&w,&h);
    memset(dist,-1,sizeof(dist));
    memset(mark,false,sizeof(mark));
    if(w==0&&h==0)
        break;
    for(int i=0;i<h;i++){
        scanf("%s",str[i]);
        for(int j=0;j<w;j++){
        if(str[i][j]=='S')
            s_i=i,s_j=j;
        else if(str[i][j]=='D')
            d_i=i,d_j=j;
        }
    }
    dist[d_i][d_j]=10000;
    recur(s_i,s_j);
    printf("%d\n",dist[d_i][d_j]);
//    for(int i=0;i<h;i++){
//        for(int j=0;j<w;j++)
//            printf("%d ",dist[i][j]);
//        printf("\n");
//    }
}

}
