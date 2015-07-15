#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int t;
int s,o,q;

scanf("%d",&t);
int arr[10001];
int use[10001];
while(t!=-1)
{   s=0;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    if(s%t!=0)
    {
        printf("-1\n");
    }
    else
    {
        o=s/t;
        q=0;
        for(int i=0;i<t;i++)
        {
        use[i]=arr[i]-o;
        if(use[i]>0)
            q=q+use[i];
        }


        printf("%d\n",q);
    }


    scanf("%d",&t);
    }
}





