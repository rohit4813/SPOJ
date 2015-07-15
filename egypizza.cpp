#include<stdio.h>
#include<cstring>
int main(){
int t,h=0,q=0,eh=0,eq=0,tf=0;
char str[5];
//freopen("egypizza.txt","r",stdin);
scanf("%d",&t);
while(t--){
    scanf("%s",&str);
    if(strcmp(str,"1/2")==0){
    h++;
    }
    else if(strcmp(str,"1/4")==0){
    q++;
    }
    else if(strcmp(str,"3/4")==0){
        tf++;
    }
}
//printf("%d %d %d\n",q,h,tf);

if(q==0){
    if(h%2==0)
        h=h/2;
    else
        h=h/2+1;
    printf("%d",tf+h+1);
}
else if(h==0){
    if(q<=tf)
        printf("%d",tf+1);
    else{
        if(q%4==0)
            q=q/4;
        else
            q=q/4+1;
        printf("%d",tf+q+1);
    }
}
else if(tf==0){
     //   printf("in tf\n");
    if(h%2==0){
        h=h/2;
        eh=0;
     }
    else{
        eh=h%2;
        h=h/2;
    }
    if(q%4==0){
            q=q/4;
            eq=0;
    }
    else{
            eq=q%4;
            q=q/4;
    }
  //printf("%d %d %d %d\n",q,eq,h,eh);

if(eh==1){
    if(eq<=2)
        printf("%d",h+q+eh+1);
    else{
        eq=eq-2;
        if(eq%4==0)
            eq=eq/4;
        else
            eq=eq/4+1;
  //  printf("%d %d\n",eq,eh);
    printf("%d",h+q+eh+eq+1);

    }
}

else{
    if(eq%4==0)
        eq=eq/4;
    else
        eq=eq/4+1;
   // printf("%d %d\n",eq,eh);
    printf("%d",h+q+eq+1);
}
}
else{
    if(q<=tf){
         if(h%2==0)
        h=h/2;
    else
        h=h/2+1;
    printf("%d",tf+h+1);
    }
    else{
        q=q-tf;
 if(h%2==0){
        h=h/2;
        eh=0;
     }
    else{
        eh=h%2;
        h=h/2;
    }
    if(q%4==0){
            q=q/4;
            eq=0;
    }
    else{
            eq=q%4;
            q=q/4;
    }
  //printf("%d %d %d %d\n",q,eq,h,eh);

if(eh==1){
    if(eq<=2)
        printf("%d",tf+h+q+eh+1);
    else{
        eq=eq-2;
        if(eq%4==0)
            eq=eq/4;
        else
            eq=eq/4+1;
   // printf("%d %d\n",eq,eh);
    printf("%d",tf+h+q+eh+eq+1);

    }
}
else{
    if(eq%4==0)
        eq=eq/4;
    else
        eq=eq/4+1;
   // printf("%d %d\n",eq,eh);
    printf("%d",tf+h+q+eq+1);
}
    }
}

return 0;

}
