
#include <iostream>
using namespace std;

#include <bits/stdc++.h>

int mod(int a,char b[]){
int p=0,i;
	for(i=0;b[i]!= '\0';i++) p = ((b[i]-'0')+p*10) %a;
	return p;
}
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
int t;
cin>>t;
int a;
char b[260]={NULL};
while(t--){
    cin>>a>>b;
if(a==0)
    cout<<b<<endl;
else{
   // int x=mod(a,b);
   // cout<<x<<endl;
    cout<<gcd(a,mod(a,b))<<endl;
}
}
return 0;
}
