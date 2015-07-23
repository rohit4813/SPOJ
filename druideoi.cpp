#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
unsigned int arr[100001];
pair<int,int> p[100001];
scanf("%d",&t);
while(t--){
int index;
//p.clear();
scanf("%d",&n);
stack<pair<unsigned int,int> > stk;
queue<pair<unsigned int,int> > great;
for(int i=0;i<n;i++){
    scanf("%u",&arr[i]);
//    if(i!=0){
//        if(arr[i]>arr[i-1])
//            p[i-1].first=i;
//        else if(arr[i]<arr[i-1])
//            p[i].second=i-1;
//    }
}
//printf("hello\n");
stk.push(pair<unsigned int,int> (arr[0],0));
for(int i=1;i<n;i++){
    unsigned int next=arr[i];
    if(!stk.empty()){
    while(stk.top().first<next){
    pair<unsigned int,int> q=stk.top();
    stk.pop();
    p[q.second].first=i;
    if(stk.empty())
        break;
    }
    stk.push(pair<unsigned int,int>(next,i));
}
}
//printf("there\n");
if(!stk.empty()){
    pair<unsigned int,int> q=stk.top();
    stk.pop();
    index=q.second;
    great.push(q);
 // printf("great :%d\n",great.front().first);
    int flag=0;
    for(int i=0;i<q.second;i++){
        if(arr[i]>great.front().first){
              flag=1;
              great.push(pair<unsigned int,int> (arr[i],i));
    //        printf("great :%d\n",great.front().first);
        }
    }
    if(flag==0)
        p[q.second].first=-2;
    else{

        great.pop();
 //   printf("great top:%d\n",great.front().first);
        p[q.second].first=great.front().second;
    }
}

while(!stk.empty()){
    int flag=0;
    pair<unsigned int,int> q=stk.top();
    stk.pop();
   // printf("remaining :%u\n",q.first);
    //printf("flag:%d\n",flag);

    if(p[index].first==-2)
        flag=1;
  //  printf("flag:%d\n",flag);
    if(flag==1)
    p[q.second].first=-2;
    else{

        while(!great.empty()&&great.front().first<=q.first){
            great.pop();
        }
        if(great.empty()||great.front().second>q.second){
         p[q.second].first=-2;
         flag=1;
        }
        else if(great.front().first>q.first){
         p[q.second].first=great.front().second;

        }


    }
}


stk.push(pair<unsigned int,int> (arr[n-1],n-1));
for(int i=n-2;i>=0;i--){
    unsigned int next=arr[i];
    if(!stk.empty()){
    while(stk.top().first<next){
    pair<unsigned int,int> q=stk.top();
    stk.pop();
    p[q.second].second=i;
    if(stk.empty())
        break;
    }
    stk.push(pair<unsigned int,int>(next,i));
}
}
while(!great.empty())
    great.pop();
if(!stk.empty()){
    pair<unsigned int,int> q=stk.top();

    //printf("remaining :%u\n",q.first);
    stk.pop();
    index=q.second;
    great.push(q);
  // printf("great :%d\n",great.front().first);
    int flag=0;
    for(int i=n-1;i>q.second;i--){
        if(arr[i]>great.front().first){
              flag=1;
              great.push(pair<unsigned int,int> (arr[i],i));
             //printf("great :%d\n",great.front().first);
        }
    }
    if(flag==0)
        p[q.second].second=-2;
    else{

        great.pop();
        //printf("great top:%d\n",great.front().first);
        p[q.second].second=great.front().second;
    }
}

//printf("there\n");
while(!stk.empty()){
    int flag=0;
    pair<unsigned int,int> q=stk.top();
    stk.pop();
//  printf("remaining :%u\n",q.first);
//    printf("flag:%d\n",flag);

    if(p[index].second==-2)
        flag=1;
   // printf("flag:%d\n",flag);
    if(flag==1)
    p[q.second].second=-2;
    else{

        while(!great.empty()&&great.front().first<=q.first){
            great.pop();
        }
        if(great.empty()||great.front().second<q.second){
         p[q.second].second=-2;
         flag=1;
        }
        else if(great.front().first>q.first){
         p[q.second].second=great.front().second;

        }


    }
}

for(int i=0;i<n;i++)
    printf("%d %d\n",p[i].second+1,p[i].first+1);
}
return 0;
}
