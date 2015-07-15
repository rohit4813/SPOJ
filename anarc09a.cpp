#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,c,f,b;
char str[2005];
int i=1;
while(1){
c=0;
f=b=0;
scanf("%s",str);
if(str[0]=='-')
    break;
for(int j=0;j<strlen(str);j++){
if(str[j]=='{'){
f++;
//printf("{ %d\n",f);
}
else{
    if(f>0){
            f--;

    }
    else {
        if(f==0){
            b++;
            f++;
        }
        else if(f>0)
            f--;
        }
//printf("%d }\n",f);

}
}

printf("%d. %d\n",i,b+f/2);
i++;
}

}
