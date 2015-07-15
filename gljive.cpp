#include<stdio.h>

#include<bits/stdc++.h>
int main(){
int a;
int s=0;
//freopen("gjlive.txt","r",stdin);
while(scanf("%d",&a)!=EOF){

if(100-s>=abs(100-s-a))
    s+=a;
else
    break;
}

printf("%d\n",s);

}
