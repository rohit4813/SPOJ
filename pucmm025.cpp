#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
char str[250];
while(scanf("%s",str)==1){
    long long int sum=0,div7=0;
   // int arr[10];
    int c=0,w,flag3=0,flag9=0,flag7=0,flag6=0;
    int mul[7]={5,4,6,2,3,1};
    int l=strlen(str);
    int last=str[l-1]-48;
   // memset(arr,0,sizeof(arr));
    for(int i=0;i<l;i++){
    int d=str[i]-48;
    sum+=d;
    div7+=d*mul[i%6];
    if(d==0);
        switch(d){
        case 1:
            c++;
            //arr[1]=1;
            break;
        case 2:
            if(last%2==0){
                c++;//arr[2]=1;
        //    printf("divisible by %d count:%d\n",d,c);
            }
            break;
        case 3:
            flag3++;
            break;
        case 4:
            w=last+10*(str[l-2]-48);
       //     printf("%d\n",qw);
            if(w%4==0){
                c++;
        //    printf("divisible by %d count:%d\n",d,c);
            }
                break;
        case 5:
            if(last%5==0){
                c++;
     //       printf("divisible by %d count:%d\n",d,c);
            }
                break;
        case 6:
            flag6++;
            break;
        case 7:
            flag7++;
            break;
        case 8:
            w=last+10*(str[l-2]-48)+100*(str[l-3]-48);
            if(w%8==0){
                c++;
          //  printf("divisible by %d count:%d\n",d,c);
            }
            break;
        case 9:
            flag9++;
            break;
    //printf("%d count:%d\n",d,c);
    //arr[d]=1;
    }
//printf("%d count:%d\n",d,c);


    }
     if(flag3>=1){
        if(sum%3==0)
            c+=flag3;
    }
    if(flag9>=1){
        if(sum%9==0)
            c+=flag9;
    }
    if(flag6>=1)
        if(str[strlen(str)-1]%2==0&&sum%3==0)
        c+=flag6;
    if(flag7>=1)
        if(div7%7==0)
        c+=flag7;
    printf("%d\n",c);
}


}
