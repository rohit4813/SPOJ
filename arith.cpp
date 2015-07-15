
#include<stdio.h>
using namespace std;

int main(){
int t,i,z;
int first[501],second[501],s1,s2;
char str[505];
char op;

//freopen("arith.txt","r",stdin);
scanf("%d",&t);
while(t--){
s1=0,s2=0,z=0;
scanf("%s",str);
    while(str[s1]>=48&&str[s1]<=57)
    {first[s1]=str[s1]-48;
    s1++;
   }
    op=str[s1];
for(z=s1+1;str[z]!='\0';z++)
    second[s2++]=str[z]-48;

//int max1=s1>s2?s1:s2;
//printf("\n%d\n%d\n%d\n",s1,s2,max1);
//    printf("\n%d\n",s2);
if(s1>=s2+1);
else
//printf("\n%d\n",max1);
printf("%*s",s2-s1+1," ");

for(int q=0;q<s1;q++)
    printf("%d",first[q]);
printf("\n");
if(s2+1>=s1);
else
    printf("%*s",s1-s2-1," ");


    printf("%c",op);
for(int q=0;q<s2;q++)
    printf("%d",second[q]);
printf("\n");
int c=0;
for(int m=s1-1;n=s2-1;m>=0&&n>=0;m--,n--){
c=c+first[m]+second[n];
//printf();
add[]
}
printf("\n");

}

return 0;
}
