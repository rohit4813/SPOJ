#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;

void generateNextPalindromeUtil(int arr[],int n){
int mid=n/2;
int l=mid-1;
int leftsmall=false;
int r=(n%2)?mid+1:mid;
while(l>=0&&arr[l]==arr[r])
    l--,r++;
if(l<0||arr[l]<arr[r])
    leftsmall=true;
while(l>=0)
{
    arr[r]=arr[l];
    l--;
    r++;
}
if(leftsmall==true){
    int c=1;
    l=mid-1;

    if(n%2==1){
    arr[mid]=arr[mid]+c;
    c=(arr[mid])/10;
    arr[mid]%=10;
    r=mid+1;
    }
    else{
        r=mid;
    }
    while(l>=0){
        arr[l]+=c;
        c=(arr[l])/10;
        arr[l]%=10;
        arr[r]=arr[l];
        l--;
        r++;
    }

    }

}


void printArray(int arr[],int n){
for(int i=0;i<n;i++)
    printf("%d",arr[i]);

}
bool All9(int arr[],int n){
for(int i=0;i<n;i++)
{
    if(arr[i]!=9)
        return 0;
}
return 1;
}
void generateNextPalindrome(int arr[],int n){

if(All9(arr,n)){
printf("1");
for(int i=0;i<n-1;i++)
    printf("0");
printf("1");
}
else{
    generateNextPalindromeUtil(arr,n);
    printArray(arr,n);
}
}
int main(){
int t,size;
char input[1000005];
//int arr[10000005];
//freopen("input.txt","r",stdin);
scanf("%d",&t);
for(int i=1;i<=t;i++){
    scanf("%s",&input);
    size=strlen(input);
    int *arr=(int *)calloc(size+1,sizeof(int));
   // int z=0,asize=0;;
   // while(input[z++]==48);

 //   printf("\n");
    for(int i=0;i<size;i++){
      arr[i]=input[i]-48;
    }


    generateNextPalindrome(arr,size);

    printf("\n");
    free(arr);

    }



    return 0;
}



