
#include<stdio.h>
#include<bits/stdc++.h>
//#include<conio.h>

using namespace std;

int main(){
  //  printf("%d",'_');
char str[190];
int c=0,j=0;
freopen("javac.txt","r",stdin);
while(scanf("%s",str)==1){
       c=0,j=0;
int l=strlen(str);
if(str[0]>=65&&str[0]<=90||str[0]=='_'||str[l-1]=='_')
{
    printf("Error!");
}
else{
for(int i=1;i<strlen(str);i++){
if(str[i]=='_'){
    c=1;
    if(str[i-1]=='_')
        j=1;
}
if(str[i]>=65&&str[i]<=90)
    j=1;
}
if(j==1&&c==1)
    printf("Error!");
else if(c==1){
    for(int i=0;i<strlen(str);i++){
   if(str[i]=='_'){
    printf("%c",str[i+1]-32);
    i++;
   }
   else
    printf("%c",str[i]);
}
}

else{
   for(int i=0;i<strlen(str);i++){
   if(str[i]>=65&&str[i]<=90){
    printf("_%c",str[i]+32);
   }
   else
    printf("%c",str[i]);
}
}
}
printf("\n");
}
return 0;
}
