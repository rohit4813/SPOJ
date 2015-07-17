#include<stdio.h>
#include<bits/stdc++.h>
#define I pq.first
#define J pq.second

using namespace std;
int m,n;
int dist[100][100];
int arr[100][100];
//bool operator <(const pair<int,int> & p,const pair<int,int> & q){
//return dist[p.I][p.J]<=dist[q.I][q.J];
//}
void recur(int i,int j){
queue<pair<int,int> > q;
pair<int,int> p(i,j);
q.push(p);
dist[p.first][p.second]=arr[i][j];
while(!q.empty()){
    pair<int,int> pq=q.front();
    q.pop();
    int a,b;
    for(int i=1;i<=4;i++){
    if(i==1)
        a=1,b=0;
    else if(i==2)
        a=-1,b=0;
    else if(i==3)
        a=0,b=1;
    else
        a=0,b=-1;
    if(I+a<m&&J+b<n&&I+a>=0&&J+b>=0){
        if(dist[I+a][J+b]==-1||dist[I][J]+arr[I+a][J+b]<dist[I+a][J+b]){
            dist[I+a][J+b]=dist[I][J]+arr[I+a][J+b];
            pair<int,int> o(I+a,J+b);
            q.push(o);
        }
    }
    }
}
}
int main(){
int t;
int d_i,d_j,time;
scanf("%d",&t);
while(t--){

    scanf("%d%d",&m,&n);
    memset(dist,-1,sizeof(dist));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);

    }
    scanf("%d%d%d",&d_i,&d_j,&time);
    recur(0,0);
    if(dist[d_i-1][d_j-1]<=time)
    printf("YES\n%d\n",time-dist[d_i-1][d_j-1]);
    else
    printf("NO\n");
//    for(int i=0;i<h;i++){
//        for(int j=0;j<w;j++)
//            printf("%d ",dist[i][j]);
//        printf("\n");
//    }
}

}
