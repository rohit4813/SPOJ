#include<stdio.h>
#include<map>
#include<string>
#include<iostream>
//#include<stdlib.h>
using namespace std;
int main(){
int t;
string str;
//freopen("iitkwpca.txt","r",stdin);
scanf("%d",&t);

char comp[10004];
map<string,bool> mp;
getline(cin,str);
while(t--){
int c=0;
//cin.getline(str,10004);
//cout<<str<<endl;
getline(cin,str);
int i=0;
int k=0;
while(i<str.length()){


    if(str[i]!=' '){
    comp[k]=str[i];
    i++;
    k++;
    //cout<<k<<" ";

}
   // cout<<comp<<endl;
    else{
    if(k>0){
    comp[k]='\0';
    k=0;
    //cout<<comp<<endl;
    //string s(comp);
    if(mp[comp]==false){
        c++;
        mp[comp]=true;
    }
    }
    while(str[i]==' ')
        i++;
    //cout<<k<<endl;
    }



}
if(k>0){

    comp[k]='\0';
    k=0;
    //cout<<comp<<endl;
    //string s(comp);
    if(mp[comp]==false){
        c++;
    mp[comp]=true;
    }
    }

printf("%d\n",c);
mp.clear();
str.empty();
}
return 0;
}
