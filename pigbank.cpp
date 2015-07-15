
#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int t,pbi,pbf,n;
freopen("pigbank.txt","r",stdin);
scanf("%d",&t);
while(t--){
scanf("%d%d",&pbi,&pbf);
int arr[2][pbf-pbi+1];
scanf("%d",&n);
int value[n+1],weight[n+1];
for(int i=0;i<n;i++){
scanf("%d%d",&value[i],&weight[i]);
}

    for(int j=0;j<=pbf-pbi;j++){
        arr[0][j]=12345678;
        arr[1][j]=0;
}
//printf("\n");
for(int i=0;i<n;i++){
    int w=weight[i];
    for(int j=0;j<pbf-pbi;j++){
        //printf("j+1:%d i:%d\n",j+1,i);
        if(w>j+1){
           //printf("j+1<weight[i] weight[i]:%d arr[i][j+1]:%d\n",weight[i],arr[i][j+1]);
            arr[(i+1)%2][j+1]=arr[i%2][j+1];
            }
        else{

            int k=(j+1)/w;

            //printf("j+1>=weight[i] weight[i]:%d arr[i][j+1]:%d j/weight[i](%d)*value[i](%d)+arr[i+1][j-(j/weight[i])*weight[i]]:%d k:%d\n",weight[i],arr[i][j+1],weight[i],value[i],(j+1)/weight[i]*value[i]+arr[i+1][j-(j/weight[i])*weight[i]],k);
          //  printf("k:%d k*value:%d j+1/w:%d\n",k,k*value[i],(j+1)/w);

            arr[(i+1)%2][j+1]=std::min(arr[i%2][j+1],value[i]+arr[(i+1)%2][j+1-w]);

        }

   }
for(int i=0;i<=1;i++){
    for(int j=0;j<=pbf-pbi;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("\n");

    }
    if(arr[n%2][pbf-pbi]==12345678)
    printf("This is impossible.\n");
    else
    printf("The minimum amount of money in the piggy-bank is %d.\n",arr[n%2][pbf-pbi]);
    }


return 0;
}
//1
//10 110
//2
//1 1
//30 50
