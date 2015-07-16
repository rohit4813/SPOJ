#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
bool flag;
long int arr[1001][2],mr=0,mR=0,c;
scanf("%d",&t);
while(t--){
c=0;
mr=0,mR=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%ld%ld",&arr[i][0],&arr[i][1]);
    if(arr[i][0]>mr){
        mr=arr[i][0];
        if(c!=0)
            mR=arr[c-1][1];
        c=i+1;
    }
    else if(arr[i][1]>mR)
        mR=arr[i][1];
}
if(mr>mR)
printf("%ld\n",c);
else
    printf("-1\n");
}

return 0;
}
