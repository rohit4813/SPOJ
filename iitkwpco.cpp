#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int main(){
int t,n,c,a,mn;
scanf("%d",&t);
map<int,int,greater<int> > m;
while(t--){
    c=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&mn);
        m[mn]++;
    }
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        a=it->first;
        if(m[2*a]>0){
            int z=m[2*a];
            m[2*a]=0;
            if(z>=m[a])
                c+=m[a],m[a]=0;
            else
                m[a]=m[a]-z,c+=z;
        }

    //printf("c:%d\n",c);
    }
    printf("%d\n",c);

    m.clear();
}
return 0;
}
