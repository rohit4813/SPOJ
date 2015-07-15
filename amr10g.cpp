#include<stdio.h>
#include<bits/stdc++.h>
int main(){

int t,n,s;
long long int minimum=LONG_LONG_MAX;
scanf("%d",&t);
while(t--){
    minimum=LONG_LONG_MAX;
    scanf("%d%d",&n,&s);
    long long int arr[n];
    for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    std::sort(arr,arr+n);
    if(s==1)
    printf("0\n");
    else if(s==n)
    printf("%lld\n",arr[n-1]-arr[0]);
    else{
//        for(int i=0;i<n;i++)
//        printf("i:%d arr[]:%lld\n",i,arr[i]);
        for(int i=s-1;i<n;i++){
        //    printf("i:%d i-s-1:%d\n",i,i-(s-1));
        if((arr[i]-arr[i-(s-1)]) < minimum)
        minimum=arr[i]-arr[i-(s-1)];
        }
    printf("%lld\n",minimum);

    }
    }

return 0;
}
