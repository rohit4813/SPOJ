#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int men[505][505];
int women[505][505];
int marriage[505];
int wife[505];
int main(){
int t,n,k;
scanf("%d",&t);
while(t--){
    memset(marriage,-1,sizeof(marriage));
    memset(wife,-1,sizeof(wife));

    queue<int> free;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        for(int j=0;j<n;j++){
            scanf("%d",&women[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        scanf("%d",&k);
        for(int j=0;j<n;j++){
            scanf("%d",&men[i][j]);
        }
    free.push(i);
    }



    while(!free.empty()){
        int index=free.front();
       // printf("men free:%d\n",index);
        free.pop();
        int w;
        for(int i=0;i<n;i++){
            int flag=0;
            w=men[index][i]-1;
            if(marriage[w]==-1){
                marriage[w]=index;
                wife[index]=w;
                break;
            }
            else{
                int m1=marriage[w];
              //  printf("alredy:%d\n",m1);
                for(int i=0;i<n;i++){
                    if(index==women[w][i]-1){

                        free.push(m1);
                        marriage[w]=index;
                        wife[index]=w;
                        flag=1;
                       // printf("new marriage w:%d m:%d\n",w,index);
                        break;
                    }
                    else if(m1==women[w][i]-1){
                      //  printf("old marriage\n");
                        break;
                    }
            }
        }
        if(flag==1)
        break;
       // printf("w:%d m:%d\n",w,marriage[w]);
    }
}
for(int i=0;i<n;i++)
    printf("%d %d\n",i+1,wife[i]+1);
}
return 0;
}
