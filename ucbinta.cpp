#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int n;
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
if(n==2){
    printf("%d %d",arr[0][1]/2,arr[0][1]/2);
}
else{
int a=(arr[0][2]-arr[1][2]+arr[0][1])/2;
printf("%d ",a);
for(int i=1;i<n;i++)
    printf("%d ",arr[0][i]-a);
}
return 0;
}
