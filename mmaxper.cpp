#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
int t,a,b,pa,pb;
long long int s=0;
cin>>t;
for(int i=0;i<t;i++){
cin>>a>>b;
int m=(a>b)?a:b;
int l=(a>b)?b:a;
if(i==0){
    s=s+m;
    pa=m;
    pb=l;
}
else{
        int s1=abs(pb-l)+m;
        int s2=abs(pb-m)+l;
if(s1>s2){
    s=s+s1;
    pa=m;pb=l;
}
else{
    s=s+s2;
    pa=l;
    pb=m;
}
}

cout<<s<<endl;
}
cout<<s<<endl;
return 0;
}
