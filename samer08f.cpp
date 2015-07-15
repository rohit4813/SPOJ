#include <stdio.h>

using namespace std;
int main(){
    int t,s;
    scanf("%d",&t);
while(t!=0){
        s=0;
for(int i=1;i<=t;i++){
    s=s+i*i;
}
printf("%d\n",s);
scanf("%d",&t);
}


}
