#include<stdio.h>
using namespace std;
int main(){
float c;
float arr[100000];
arr[0]=0;
for(int i=1;i<100000;i++)
{
    arr[i]=arr[i-1]+(float)1/(i+1);
}
while(1){
    scanf("%f",&c);
    if(c==0.00)
        break;
        else
        {
            for(int i=1;i<100000;i++){
                if(arr[i]>=c){
                    printf("%d card(s)\n",i);
                    break;
                }

            }
        }

}
return 0;
}
