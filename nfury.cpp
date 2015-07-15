#include<stdio.h>
using namespace std;
#include <bits/stdc++.h>
int arr[35][1005];
int main(){
int t,n;

memset(arr,0,sizeof(arr));
    for(int i=1;i<=34;i++){
        for(int j=1;j<=1003;j++){
            if(j>=(i*i)){
                int x=j/(i*i);
                if(j%(i*i)==0)
                    arr[i][j]=x;
                else{
                    int y=x*i*i;
                    arr[i][j]=std::min(arr[i-1][j],x+arr[i-1][j-y]);
                    }
            }
            else
                {
                arr[i][j]=arr[i-1][j];
            }

        }
//ir[i][n];
    }
scanf("%d",&t);
while(t--){
scanf("%d",&n);
int v=sqrt(n);
if(v*v==n)
printf("1\n");
else if(arr[v][n]!=0)
    printf("%d\n",arr[v][n]);
else{

    for(int i=1;i<=34;i++){
        for(int j=1;j<=1003;j++){
            if(j>=(i*i)){
                int x=j/(i*i);
                if(j%(i*i)==0)
                    arr[i][j]=x;
                else{
                    int y=x*i*i;
                    arr[i][j]=std::min(arr[i-1][j],x+arr[i-1][j-y]);
                    }
            }
            else
                {
                arr[i][j]=arr[i-1][j];
            }

        }
}
printf("%d\n",arr[v][n]);
}
}


return 0;
}
