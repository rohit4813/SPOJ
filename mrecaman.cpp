#include<stdio.h>
bool exist[10000000]={0};
long long int arr[500005];
int main(){
long int k;
arr[0]=0;
exist[0]=1;
long long int temp;
for(int i=1;i<=500005;i++){
    temp=arr[i-1]-i;
    if(temp>0&&exist[temp]==0){
        arr[i]=temp;
        exist[arr[i]]=1;
    }
    else{
        arr[i]=temp+2*i;
        exist[arr[i]]=1;
    }
}
    scanf("%d",&k);
while(k!=-1){
    printf("%lld\n",arr[k]);
scanf("%d",&k);

}

return 0;
}
