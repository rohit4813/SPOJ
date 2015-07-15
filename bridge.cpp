
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
bool operator <(const pii &f,const pii &s) {
return f.first<=s.first;
}
//};


int main(){
int t,n;
//freopen("bridge.txt","r",stdin);
scanf("%d",&t);
while(t--){
scanf("%d",&n);
//int arr1[n],arr2[n];
pair<int,int> node[n];
    //struct p node;
    for(int i=0;i<n;i++)
        scanf("%d",&node[i].first);
    for(int i=0;i<n;i++)
        scanf("%d",&node[i].second);

   sort(node,node+n);
   int res[n];
   memset(res,0,sizeof(res));
   int maximum=0;
//   for(int i=0;i<n;i++)
//    printf("%d ",res[i]);
//   printf("\n");
//for(int i=0;i<n;i++)
//        printf("%d ",node[i].first);
//        printf("\n");
//for(int i=0;i<n;i++)
//        printf("%d ",node[i].second);
//printf("\n");
   for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        //printf("j:%d i:%d node[j]:%d node[i]:%d\n",j,i,node[j].second,node[i].second);
        if((node[i].second>=node[j].second)&&(res[j]+1>res[i]))
            res[i]=res[j]+1;

//    for(int i=0;i<n;i++)
//        printf("%d ",res[i]);
//    printf("\n");
    }
    if(res[i]>maximum)
        maximum=res[i];
}
printf("%d\n",maximum+1);
//    for(int i=0;i<n;i++){
//        printf("%d %d\n",node[i].first,node[i].second);
//
//        }
//    }
}
   return 0;
}
