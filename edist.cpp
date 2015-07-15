
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int arr[2][2005];
char str1[2005],str2[2005];

int main(){
int t;
scanf("%d",&t);
while(t--){
scanf("%s%s",str1,str2);
int l1,l2;
l1=strlen(str1);
l2=strlen(str2);
for(int i=0;i<=l2;i++)
    arr[0][i]=i;

for(int i=0;i<l1;i++){
arr[(i+1)%2][0]=i+1;

for(int j=0;j<l2;j++){
    if(str1[i]!=str2[j])
        arr[((i+1)%2)][j+1]=1+min(arr[(i%2)][j],min(arr[(i%2)][j+1],arr[((i+1)%2)][j]));
    else
        arr[((i+1)%2)][j+1]=arr[(i%2)][j];
//        printf("\n");
//for(int i=0;i<=l2;i++)
//    printf("%d ",arr[0][i]);
//printf("\n");
//for(int i=0;i<=l2;i++)
//    printf("%d ",arr[1][i]);
}
}
printf("%d\n",arr[(l1%2)][l2]);
}

return 0;
}
