#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
char str[201];
int t,c;
scanf("%d",&t);
while(t!=0){
        scanf("%s",str);
int l=strlen(str);

int rows=l/t;
int q=0;
int flag=0;
char pp[rows][t];
for(int i=0;i<rows;i++)
{
    for(int j=0;j<t;j++)
    {
        if(i%2==0){
        pp[i][j]=str[q];
        q++;
        }
        else{
            pp[i][t-j-1]=str[q];
            q++;
        }
    }



}

for(int j=0;j<t;j++)
    for(int i=0;i<rows;i++)
    printf("%c",pp[i][j]);
printf("\n");

scanf("%d",&t);
}
}
