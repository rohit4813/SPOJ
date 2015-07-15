#include<stdio.h>
#include<bits/stdc++.h>

int main(){
int t,n;
int arr[10001];
scanf("%d",&t);
while(t--){
int flag=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

for(int i=1;i<n;i+=2){
    if(arr[i]!=arr[i-1]){
        int j=arr[i]-arr[i-1];
        if(j<0||i+1==n){
            flag=1;
            break;
        }
        arr[i]=arr[i]-j;
        arr[i+1]=arr[i+1]-j;
    }
}
if(n%2==1)
    if(arr[n-1]!=0)
        flag=1;
if(flag==1)
    printf("NO\n");
else
    printf("YES\n");
}
return 0;
}
