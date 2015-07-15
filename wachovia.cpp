#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int n,k,m;
scanf("%d",&n);
while(n--){
    scanf("%d%d",&k,&m);
    int maxx[2][k+1];
    int weights[m],value[m];
    memset(maxx,0,sizeof(maxx));
    for(int i=0;i<m;i++){
        scanf("%d%d",&weights[i],&value[i]);
    }
    long long int s=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            int z=weights[i];
            if(j+1>=z)
                maxx[(i+1)%2][j+1]=std::max(maxx[i%2][j+1],maxx[i%2][j+1-z]+value[i]);
            else
                maxx[(i+1)%2][j+1]=maxx[i%2][j+1];
        if(maxx[(i+1)%2][j+1]>s)
            s=maxx[(i+1)%2][j+1];
        }  // if(ma)
    }
printf("Hey stupid robber, you can get %lld.\n",s);
}

return 0;
}
