#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
int t,a,b,n,d;
cin>>t;
while(t--){
    cin>>a>>b;
    n=b-a+1;
    d=(n-1)*(n-2)/2;
    cout<<n*b-a-d<<endl;
}

return 0;
}
