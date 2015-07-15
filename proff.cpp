#include<stdio.h>
#include<bits/stdc++.h>

int main(){
char str1[15],str2[15];
while(1){
    int carry=0,count=0;
    scanf("%s%s",str1,str2);
    if(strcmp(str1,"0")==0&&strcmp(str2,"0")==0)
        break;
    int l1=strlen(str1);
    int l2=strlen(str2);
    int l11=l1-1;
    int l22=l2-1;
    //printf("str1:%s l1:%d l11:%d str2:%s l2:%d l22:%d\n",str1,l1,l11,str2,l2,l22);
    for(int i=0;i<l1&&i<l2;i++){
       // printf("l11:%d l22:%d %c %c\n",l11,l22,str1[l11],str2[l22]);
        if((str1[l11--]-48)+(str2[l22--]-48)+carry>=10){

            carry=1,count++;
        }
        else
            carry=0;
    }
if(l1<l2){
    while(l22>=0){
    //printf("l22:%d c:%d str[]\n",l22,carry,str2[l22]);
    if((str2[l22--]-48)==9&&carry==1)
        count++;
    else
        break;
    }
}
else if(l1>l2){
    while(l11>=0){
    if((str1[l11--]-48)==9&&carry==1)
        count++;
    else
        break;
}
}
if(count==0)
printf("No carry operation.\n");
else if(count==1)
printf("1 carry operation.\n");
else
printf("%d carry operations.\n",count);
}
return 0;
}
