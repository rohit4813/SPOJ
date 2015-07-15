#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int bud;
int n;
while(1){
scanf("%d%d",&bud,&n);
if(bud==0&&n==0)
    break;
int budget[2][bud+1],fun[n],partycost[n];
for(int i=0;i<n;i++){
scanf("%d%d",&partycost[i],&fun[i]);
}
memset(budget,0,sizeof(budget));
//    for(int i=0;i<=1;i++){
//    for(int j=0;j<=bud;j++)
//        printf("%d ",budget[i][j]);
//    printf("\n");
//}
printf("\n");
for(int i=0;i<n;i++){

    for(int j=0;j<bud;j++){
            int z=partycost[i];
    if(z>j+1)
    budget[((i+1)%2)][j+1]=budget[(i%2)][j+1];
    else
    budget[((i+1)%2)][j+1]=std::max(budget[(i%2)][j+1],fun[i]+budget[(i%2)][j+1-z]);

    }
}
int maximum=0,flag=0;
int r=n%2;
for(int j=0;j<=bud;j++){

   if(budget[r][j]>maximum)
    maximum=budget[n%2][j],flag=j;
}
printf("%d %d",flag,maximum);
}
return 0;
}
//7 4
//1 3
//3 4
//4 5
//6 5
