
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int main(){
    char str[5010];
    int arr[5010];
    int flag=0;
while(scanf("%s",str)){
if(strcmp(str,"0")==0)
    return 0;
arr[0]=0;
flag=0;
for(int i=1;i<strlen(str);i++){
int l=i-2;
if((str[i]-48==0)&&((str[i-1]-48==0)||(str[i-1]-48>2))){
flag=1;
break;
}
if((str[i]-48==0)&&((str[i-1]-48==1)||(str[i-1]-48==2))){
    if(l>=0)
        arr[i]=arr[l];
    else arr[i]=0;
}
else if((str[i-1]-48==0)&&((str[i]-48)>=1)){
    arr[i]=arr[i-1];
}
else{
    int t=(str[i]-48)+10*(str[i-1]-48);
    if(t<=26){
         //   cout<<i<<"t less";
        if(l>=0){
            arr[i]=arr[l]+1+arr[i-1];
        }
        else arr[i]=arr[i-1]+1;
    }
else arr[i]=arr[i-1];
}
}
for(int i=0;i<strlen(str);i++)
    cout<<arr[i]<<" ";
if(flag==0)
cout<<arr[strlen(str)-1]+1<<endl;
else
    cout<<"0"<<endl;
}
return 0;
}
