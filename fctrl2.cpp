#include<stdio.h>
using namespace std;
int main(){
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++){
    int n,c,m,j,prod,size1=1,arr[200]={0};
    scanf("%d",&n);

    arr[0]=1;
    for(j=2;j<=n;j++){
            c=0;
            for(m=0;m<size1;m++)
            {
              prod=arr[m]*j+c;
              arr[m]=prod%10;
              c=prod/10;
            }
            while(c){
                arr[size1]=c%10;
                c=c/10;
                size1++;
            }
    }
    for(j=size1-1;j>=0;j--)
        printf("%d",arr[j]);
    printf("\n");
    }
}
