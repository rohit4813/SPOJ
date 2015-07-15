#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
//#include <string.h>
using namespace std;

int cov(string a){
int r=1;
int no=0;
for(int i=a.length()-1;i>=0;i--)
{

no=no+(a[i]-48)*r;
r=r*10;
}
return no;
}
int main(){
int t,flag;
string s1,s2,s3,s4,s5;
int a,b,c;
string check="machula";
//freopen("absys.txt","r",stdin);
scanf("%d\n",&t);
while(t--){
      scanf("\n");
cin>>s1>>s2>>s3>>s4>>s5;
if(s1.find("m") !=string::npos)
    flag=1;
else if(s3.find("m") !=string::npos)
    flag=2;
else if(s5.find("m") !=string::npos)
    flag=3;
a=cov(s1);
b=cov(s3);
c=cov(s5);
if(flag==1)
a=c-b;
else if(flag==2)
b=c-a;
else c=a+b;
cout<<a<<" + "<<b<<" = "<<c<<endl;
}






return 0;
}
