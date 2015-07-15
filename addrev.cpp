#include <iostream>
using namespace std;
int reverse1(int);
int main(){
int n,i,a,b,c;
cin>>n;
for(i=0;i<n;i++){
cin>>a>>b;
c=reverse1(a)+reverse1(b);
cout<<reverse1(c)<<endl;
}
return 0;
}
int reverse1(int a){
int r=0;
while(a)
{
r=r*10;;
r=r+a%10;
a=a/10;
}
return r;
}

