#include <iostream>
using namespace std;
#include<math.h>
int main(){
int t,n,s,q;
cin>>t;
while(t>0){
    cin>>n;
    s=0;
    for(q=5;(n/q)>=1;q=q*5)
    {
        s=s+n/q;
    }
    cout<<s<<endl;
    t--;
}


return 0;
}
