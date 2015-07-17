
#include<stdio.h>
#include<cstring>
int main(){
int t,c;
bool flag;
char str[120002];
scanf("%d",&t);
for(int i=1;i<=t;i++){
    c=0;
    flag=0;
    scanf("%s",str);
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]=='0')
            c++;
        else if(str[i]=='1'){
            c=c-2;
            if(c<0){
                flag=1;
                break;
        }
    }
}
if(flag==1||c!=0)
    printf("Case %d: no\n",i);
else
    printf("Case %d: yes\n",i);

}
return 0;
}
