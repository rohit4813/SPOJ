#include<stdio.h>
#include<math.h>
//#define PI
using namespace std;
int main(){
int t,n;
while(scanf("%d",&t)){
if(t==0)
    break;
float a=(t*t)/(2*M_PI);
printf("%.2f\n",a);
}

return 0;
}
