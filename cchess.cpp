#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
struct node{
int vertex;
int edge;
bool operator <(const node & x)const{
return edge>=x.edge;
}
};
vector <struct node> graph[66];
void construct_graph(){
for(int i=0;i<=7;i++){
    for(int j=0;j<=7;j++){
        int x=8*i+j;
        //p.make_pair(i,j);
        if(i+2<=7&&j+1<=7){
        int y=8*(i+2)+(j+1);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i+2)+j*(j+1);
        graph[x].push_back(ends);
        }
        if(i+2<=7&&j-1>=0){
        int y=8*(i+2)+(j-1);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i+2)+j*(j-1);
        graph[x].push_back(ends);
        }
        if(i-2>=0&&j+1<=7){
        int y=8*(i-2)+(j+1);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i-2)+j*(j+1);
        graph[x].push_back(ends);
        }
        if(i-2>=0&&j-1>=0){
        int y=8*(i-2)+(j-1);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i-2)+j*(j-1);
        graph[x].push_back(ends);
        }
        if(i+1<=7&&j+2<=7){
        int y=8*(i+1)+(j+2);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i+1)+j*(j+2);
        graph[x].push_back(ends);
        }
        if(i+1<=7&&j-2>=0){
        int y=8*(i+1)+(j-2);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i+1)+j*(j-2);
        graph[x].push_back(ends);
        }
        if(i-1>=0&&j+2<=7){
        int y=8*(i-1)+(j+2);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i-1)+j*(j+2);
        graph[x].push_back(ends);
        }
        if(i-1>=0&&j-2>=0){
        int y=8*(i-1)+(j-2);
        struct node ends;
        ends.vertex=y;
        ends.edge=i*(i-1)+j*(j-2);
        graph[x].push_back(ends);
        }

    }
}


}
//int graph[65][65];
bool taken[65];
int dist[65];
void dijkstra(int s,int d){

memset(taken,false,sizeof(taken));

memset(dist,-1,sizeof(dist));
priority_queue<node> pq;
struct node st;
st.vertex=s;
st.edge=0;
pq.push(st);
dist[s]=0;
while(!pq.empty()){
    struct node dest=pq.top();
    pq.pop();
    if(taken[dest.vertex]==true)
        continue;
    taken[dest.vertex]=true;
    if(dest.vertex==d)
        return;
    for(vector<node>:: iterator it=graph[dest.vertex].begin();it!=graph[dest.vertex].end();it++){
        if(dist[it->vertex]==-1||dist[it->vertex]>dist[dest.vertex]+ it->edge){
            dist[it->vertex]=dist[dest.vertex]+ it->edge;
            struct node extra;
            extra.vertex=it->vertex;
            extra.edge=dist[it->vertex];
            pq.push(extra);
        }
    }

}

}
int main(){
construct_graph();
int a,b,c,d;
while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){



int x=8*a+b;
int y=8*c+d;
dijkstra(x,y);

printf("%d\n",dist[y]);

}
}
