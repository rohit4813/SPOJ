#include<stdio.h>
using namespace std;

#include <bits/stdc++.h>
int main(){
int t,n,c;
scanf("%d",&t);
while(t--){

    scanf("%d",&n);
    int arr[n];
    memset(arr,0,sizeof(arr));
    int flag=0;
    for(int i=0;i<n;i++){
        scanf("%d",&c);
    //cc[c]++;
    if(c>=n)
        flag=1;
    else{
            if(arr[c]==0)
            arr[c]=c;
            else if(arr[n-1-c]==0)
                arr[n-1-c]=c;
            else
                flag=1;
        }

    }
//    for(int i=0;i<n;i++)
//        printf("%d ",arr[i]);
//    printf("\n");
    if(flag==1)
         printf("NO\n");
    else
         printf("YES\n");



}
return 0;
}
