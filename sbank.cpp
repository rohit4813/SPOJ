#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int> c;
int t,n;
char res[50];
scanf("%d",&t);
while(t--){
c.clear();
scanf("%d",&n);
gets(res);
while(n--){

gets(res);
//puts(str);
c[res]++;
//printf("%s %d\n",res,c[res]);
}
gets(res);
////
for(map<string,int>:: iterator it=c.begin();it!=c.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
}
return 0;
}
