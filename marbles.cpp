#include<iostream>
#include<stdio.h>
using namespace std;
#include<math.h>
int main(){
int t;
cin>>t;
int n,k,r;
long double n1,q;
long double ncr=1.0;
while(t--){
    cin>>n>>k;
    if(n==k)
        cout<<"1"<<endl;
    else {
        n1=n-1;
        ncr=1;
        q=1;
        if(k-1<n-k)
        r=k-1;
        else r=n-k;
        for(int i=r;i>=1;i--){
            q=(long double)n1/i;
            ncr=ncr*q;
           // cout<<r<<" "<<n1<<" "<<ncr<<endl;
           // cout<<n1<<" "<<i<<ncr<<endl;
            n1--;


        }
        cout<<(unsigned long long int )floor(ncr)<<endl;
    }

}
return 0;
}
