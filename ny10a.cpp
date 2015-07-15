#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
int t,n,ttt=0,tth=0,tht=0,thh=0,htt=0,hth=0,hht=0,hhh=0;
char str[45];
//freopen("ny10a.txt","r",stdin);
scanf("%d",&t);
while(t--){
        ttt=tth=tht=thh=htt=hth=hht=hhh=0;
    scanf("%d",&n);
    scanf("%s",str);
 //   printf("%s",str);
    for(int i=0;i<38;i++){
        if(str[i]=='T'&&str[i+1]=='T'&&str[i+2]=='T')
            ttt++;
        else if(str[i]=='T'&&str[i+1]=='T'&&str[i+2]=='H')
            tth++;
        else if(str[i]=='T'&&str[i+1]=='H'&&str[i+2]=='T')
           tht++;
        else  if(str[i]=='T'&&str[i+1]=='H'&&str[i+2]=='H')
            thh++;
        else if(str[i]=='H'&&str[i+1]=='T'&&str[i+2]=='T')
            htt++;
        else   if(str[i]=='H'&&str[i+1]=='T'&&str[i+2]=='H')
            hth++;
        else  if(str[i]=='H'&&str[i+1]=='H'&&str[i+2]=='T')
            hht++;
        else  if(str[i]=='H'&&str[i+1]=='H'&&str[i+2]=='H')
            hhh++;
    }

printf("%d %d %d %d %d %d %d %d %d\n",n,ttt,tth,tht,thh,htt,hth,hht,hhh);

}
return 0;
}
