#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
char str[1010];

int fuc1(int n){
int s=0;
if(n==1){
    for(int i=0;i<strlen(str);i++){
        if(i%2==1&&str[i]>=65&&str[i]<=90){
            s++;
        }
        if(i%2==0&&str[i]>=97&&str[i]<=123){
            s++;
        }
    }
}
else{
    for(int i=0;i<strlen(str);i++){
        if(i%2==0&&str[i]>=65&&str[i]<=90){
            s++;
        }
        if(i%2==1&&str[i]>=97&&str[i]<=123){
            s++;
        }
    }
}
return s;
}

int main(){
    while(scanf("%s",str)==1)
    printf("%d\n",min(fuc1(1),fuc1(2)));
return 0;
}
