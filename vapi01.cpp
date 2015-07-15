#include<stdio.h>
#include<bits/stdc++.h>
int main(){
int t,n,s=0;

scanf("%d",&t);
while(t--){
        s=0;

std::map<char,int> check;
scanf("%d",&n);
char str[2*n];
scanf("%s",str);
for(int i=1;i<strlen(str);i+=2){
//printf("%s ",str[i]);
    if(str[i]==str[i-1]-32);
    else{
        check[str[i-1]]++;
        char ch=(char)str[i]+32;
       // printf("%c\n",ch);
        if(check[ch]>0)
            check[ch]--;
        else s++;
    }
}
printf("%d\n",s);
}
return 0;
}
