#include<stdio.h>
#include<algorithm>
int gcd(int a,int b){
if(b==0)
   return a;
else
    gcd(b,a%b);
}
int main(){
int t,a,b,ans,gd,s,l;
scanf("%d",&t);
while(t--){
scanf("%d%d%d",&a,&b,&ans);
s=a>=b?b:a;
l=a>=b?a:b;
gd=gcd(a,b);

if(ans%gd!=0||ans>l)
    printf("-1\n");
else{
    int coun=0,c2=0,m=0,n=0,z;
    while(m!=ans&&n!=ans){

           // printf("count:%d\n",coun);
        if(m==0)
            m=a;

//            printf("%count:%d\n",coun);
        else if(n==b)
            n=0;

  //          printf("%count:%d\n",coun);
        else if(a>b){
            z=b-n;
           if(m>=z)
            m=m-z,n=b;
           else
            n=n+m,m=0;
        }

    //        printf("%count:%d\n",coun);
        else{
            z=b-n;
            if(z>=m)
                n=n+m,m=0;
            else
                m=m-z,n=b;
        }

      //      printf("%count:%d\n",coun);
            coun++;
           // printf("count:%d\n",coun);
    }
    m=n=0;
    while(m!=ans&&n!=ans){
        if(n==0)
            n=b;
        else if(m==a)
            m=0;

        else if(b>a){
            z=a-m;

            if(n>=z)
           // printf("here\n");
            n=n-z,m=a;
           // printf("n:%d z:%d\n",n,z);
           else
            m=m+n,n=0;
        }
        else{
            z=a-m;
            if(z>=n)
                m=m+n,n=0;
            else
                n=n-z,m=a;
        }

            c2++;

           // printf("c2:%d m:%d n:%d z:%d n-z:%d\n",c2,m,n,z,n-z);
    }
printf("%d\n",std::min(coun,c2));
}
}






return 0;
}
