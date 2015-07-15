#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
int m;
cin>>t>>m;

int arr[t];
//int sum[t];
for(int i=0;i<t;i++){
    cin>>arr[i];
}

int s=arr[0],trr=0;
int start=0;

for(int i=1;i<t;i++){
s+=arr[i];
while(s>m&&start<i){
    s=s-arr[start];
    start++;
}
if(trr<s)
    trr=s;
    if(trr==m)
        break;
//    cout<<s<<" "<<trr<<endl;
}
cout<<trr<<endl;
return 0;
}
