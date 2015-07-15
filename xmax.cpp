#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int length(unsigned long long int x){
int c=0;
while(x){
    c++;
    x=x>>1;
}
return c;
}
int main(){
int n;
cin>>n;
unsigned long long int sum=0;
int lengtharr[n],maxsize=0;
vector<unsigned long long int> buckets[65];
unsigned long long int arr[n],max[100],maxima;
for(int i=0;i<n;i++){
        cin>>arr[i];
       // lengtharr[i]=length(arr[i]);
}
for(int i=0;i<n;i++){
//        cin>>arr[i];
        lengtharr[i]=length(arr[i]);
}

for(int i=0;i<n;i++){
  //  cout<<arr[i]<<" "<<lengtharr[i]<<endl;
buckets[lengtharr[i]].push_back(arr[i]);
}

for(int i=64;i>0;i--){
        if(buckets[i].size()){
max[maxsize++]=buckets[i][0];
for(int j=1;j<buckets[i].size();j++){
        maxima=buckets[i][0]^buckets[i][j];
        int l=length(maxima);
        buckets[l].push_back(maxima);
        }
}


  //  cout<<arr[i]<<" "<<lengtharr[i]<<endl;
//buckets[lengtharr[i]].push_back(arr[i]);

}

sum=0;
for(int j=0;j<maxsize;j++){
    if(sum<(sum^max[j]))
        sum=sum^max[j];
}
cout<<sum<<endl;
//getch();
return 0;
}
