#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int n;
int flag;
while(1){
    scanf("%d",&n);
    if(n==0)
        break;
    int arr[n];
    flag=0;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n<8)
        printf("IMPOSSIBLE\n");
    else{
    std::sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>200){
            printf("IMPOSSIBLE\n");
            flag=1;
            break;
        }
    }

    if(flag==0){
        if(arr[n-1]<1322)
            printf("IMPOSSIBLE\n");
        else
        printf("POSSIBLE\n");
    }
    }

}

return 0;
}
