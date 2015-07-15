#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
long long int t,n,k,o,nn;
long long int s=0;
cin>>t;
while(t--){
        o=0,nn=0;
        s=0;
        cin>>n>>k;
        long long int arr[n+9];
for(long long int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>=0)
    s=s+arr[i];
    if(arr[i]==0)
        o++;
    if(arr[i]<0)
        nn++;
}
sort(arr,arr+n);
//for(long long int i=0;i<n;i++)
//    cout<<arr[i]<<" ";
//cout<<s<<endl;
//if(nn==0){
//    if(o>=1||k%2==0){
//        cout<<s<<endl;
//    }
//    else{
//            cout<<s-2*arr[0]<<endl;
//    }
//}
//else{r
        long long int i,j;
       // cout<<nn<<" "<<s<<endl;
        for(i=0,j=k;i<nn&&j>=1;i++,j--){
            arr[i]=(-1)*arr[i];
            s=s+arr[i];

        //    cout<<i<<j<<" "<<s<<endl;
        }

        while(i<nn){
            s=s+arr[i];
            i++;
            }
        //cout<<"s:"<<s<<endl;

        if(abs(k-nn)%2==0||nn>=k)
            cout<<s<<endl;
        else if(nn<k){
            sort(arr,arr+n);
//            for(int i=0;i<n;i++)
//            cout<<arr[i]<<" ";
//        cout<<endl;
            k=k-nn;
           // cout<<k<<endl;
            if(o>=1||k%2==0){
            cout<<s<<endl;
            }
            else{
            cout<<s-2*arr[0]<<endl;
            }

        }


}
return 0;
}
