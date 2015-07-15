#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,idbob,fbob,frf,c=0;
scanf("%d",&t);
int arr[t];
map<int,int> count;
for(int i=0;i<t;i++){
     //   printf()
    scanf("%d",&idbob);
   count[idbob]++;
   if(count[idbob]>=2)
    c--;

scanf("%d",&fbob);
    while(fbob--){
    scanf("%d",&frf);
    count[frf]++;

   if(count[frf]==1)
        c++;
   // else if(count[frf]==2)
     //       c--;
    //    printf("%d %d %d\n",frf,count[frf],c);

    }
}
printf("%d\n",c);
return 0;
}
