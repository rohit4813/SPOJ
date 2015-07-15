#include<stdio.h>
#include<bits/stdc++.h>

#include<string>
using namespace std;
int main(){
int n,m;
string str;
freopen("clone.txt","r",stdin);
while(scanf("%d%d",&n,&m)){
    if(n==0&&m==0)
        return 0;
    else{
map<string,int> counter;
int arr[n];
memset(arr,0,sizeof(arr));
int m=n;
while(n--){
    cin>>str;
    counter[str]=counter[str]+1;
}
for(map<string,int>::iterator it=counter.begin();it!=counter.end();it++){
    //printf("%d",counter[])
   arr[it->second-1]++;
//    cout<<it->first<<" "<<it->second<<endl;
}
//flush(cout);
//printf("%d",arr[0]);
for(int j=0;j<m;j++)
    cout<<arr[j]<<endl;


}


}

return 0;
}
