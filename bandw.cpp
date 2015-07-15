
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int e,ne;
char str1[505],str2[505];
int arr[555];
while(1){
    int c=0;
    scanf("%s%s",str1,str2);
    if(str1[0]=='*')
        break;
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]!=str2[i]){
            c++;
            i++;
            while(str1[i]!=str2[i])
                i++;
        }
    }
printf("%d\n",c);
}
return 0;
}
