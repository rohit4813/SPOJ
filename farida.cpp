#include<iostream>
#include<bits/stdc++.h>

long long int arr[10009];
long long int n;
long long int sum[10009];
using namespace std;
long long int recur(long long int i){
    if(i<0||i>=n)
        return 0;
    if(sum[i]!=-1)
        return sum[i];




    sum[i]=(long long)max(recur(i+2),recur(i+3))+arr[i];

    //sum[i]=s;
//    cout<<"i:"<<i<<" arr[i]:"<<arr[i]<<" sum[i]"<<sum[i]<<" a:"<<a<<" b:"<<b<<endl;
//   cout<<endl;
//  for(int i=0;i<n;i++)
//        cout<<sum[i]<<" ";
//cout<<endl;

    return sum[i];
}
int main(){
long long int t;
cin>>t;
for(long long int i=1;i<=t;i++){
        cin>>n;
        for(long long int i=0;i<n;i++){
        cin>>arr[i];
        }
//         for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//        }
//        cout<<endl;
    memset(sum,-1,sizeof(sum));
    recur(0);
//    for(int i=0;i<n;i++)
//        cout<<sum[i]<<" ";
//cout<<endl;
//    s=0;
    recur(1);
//    for(int i=0;i<n;i++)
//        cout<<sum[i]<<" ";

cout<<"Case "<<i<<": "<<(long long)max(sum[0],sum[1])<<endl;
}
return 0;
}
