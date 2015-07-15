#include <stdio.h>
#include <bits/stdc++.h>
//#include <cstring>
using namespace std;
int main(){
int t,ng,nm;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&ng,&nm);
    int *godzilla=(int *)calloc(ng+1,sizeof(int));
    int *mgodzilla=(int *)calloc(nm+1,sizeof(int));
    for(int i=0;i<ng;i++)
        scanf("%d",&godzilla[i]);
       for(int i=0;i<nm;i++)
        scanf("%d",&mgodzilla[i]);
        sort(godzilla,godzilla+ng);
        sort(mgodzilla,mgodzilla+nm);
    int i=0,j=0;
    while(i<ng&&j<nm){
        if(godzilla[i]>=mgodzilla[j])
            j++;
        else
            i++;
    }
    if(i<ng)
        printf("Godzilla\n");
    else printf("MechaGodzilla\n");
    free(godzilla);
    free(mgodzilla);
}
return 0;
}
