#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,m;
int arr[100005];
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&m);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

sort(arr,arr+n);
int a=0,b=n-1;
int c=0;
for(int i=0;a<b;i++){
if(arr[a]+arr[b]==m)
    c++,a++;
else if(arr[a]+arr[b]>m)
    b--;
else
    a++;
}
printf("%d\n",c);
}
return 0;
}
