#include <stdio.h>
//freopen("filename.txt","r",stdin);
using namespace std;
#include <bits/stdc++.h>
long long  int mergee(int *,int*,int, int , int );
long long int  merge_sort(int *arr,int *temp,int f,int l){
   long long int invt=0;
int p;
if(f<l){
     p=(f+l)/2;
    invt=merge_sort(arr,temp,f,p);
    invt+=merge_sort(arr,temp,p+1,l);
    invt+=mergee(arr,temp,f,p,l);
}

return invt;
}

long long  int mergee(int *arr,int *temp,int f,int p,int l){
 int i, j, k;
    i = f;
    k = f;
    j = p + 1;
    long long int inv=0;
  //  printf("%d %d %d\n",i,p,l);
   while (i <= p && j <= l)
    {
  // printf("%d %d\n",arr[i],arr[j]);
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
            inv=inv+p-i+1;
        }
    }
    while (i <=p)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= l)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (i = f; i < k; i++)
    {  //printf("%d ",c[i]);
        arr[i] = temp[i];
    }
  //  printf("%d\n",inv);
    return inv;
}
int main(){

int t;

long long int inv=0;
scanf("%d",&t);
while(t--){
int size1;
scanf("%d",&size1);
int arr[size1],temp[size1];
for(int i=0;i<size1;i++){
scanf("%d",&arr[i]);
}

inv=merge_sort(arr,temp,0,size1-1);
printf("%lld\n",inv);
}
return 0;
}
