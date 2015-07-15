#include<stdio.h>
using namespace std;
#include<string.h>
int main(){
int t=10,l1,l2,s,c,tt;
char sum[103];
char diff[103];
int sumi[103];
int diffi[103];
int add[103];
int res[103];
int second[103]={0};
while(t--)
{
scanf("%s",&sum);
scanf("%s",&diff);
l1=strlen(sum);
l2=strlen(diff);
for(int i=1;i<=l1;i++){
sumi[i]=sum[i-1]-48;
}
sumi[0]=0;
for(int i=1;i<=l2;i++){
diffi[i]=diff[i-1]-48;
}
diffi[0]=0;

c=0;



for(int i=l1,j=l2;i>=1;i--,j--){
if(j>=1){
c=c+sumi[i]+diffi[j];
add[i]=c%10;
c=c/10;
}

else
{
        c=sumi[i]+c;
        add[i]=c%10;
        c=c/10;
}
}
if(c)
    add[0]=c;
else
    add[0]=0;


tt=0;

for(int i=0;i<=l1;i++)
{

    tt=tt+add[i];
    res[i]=tt/2;
    if(tt%2==0){

    tt=0;
    }else {
    tt=10;
    }

}


for(int i=l1;i>=0;i--){

        c=sumi[i]-res[i];
        if(c>=0)
            second[i]=c;


        else{
            for(int k=i-1;;k--)
            {   if(sumi[k]==0)
                    sumi[k]=9;
                    else
                        {
                sumi[k]=sumi[k]-1;
                break;
                }
            }

            second[i]=c+10;
            }


}
        int flag=0;
for(int i=0;i<=l1;i++){
    if(res[i]==0){
        if(flag==0){}
        else
            printf("%d",res[i]);
    }

    else{

printf("%d",res[i]);
flag=1;
}
}
printf("\n");
flag=0;
for(int i=0;i<=l1;i++){
    if(second[i]==0){
        if(flag==0){}
        else
            printf("%d",second[i]);
    }

    else{

printf("%d",second[i]);
flag=1;
}
}

printf("\n");

}
return 0;
}
