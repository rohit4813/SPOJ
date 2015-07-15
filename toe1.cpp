#include<stdio.h>
using namespace std;
int main(){
int t,c,o,cflag,oflag;
scanf("%d",&t);
char str[4][4];
while(t--){
        cflag=oflag=0;
        c=0,o=0;
       for(int i=0;i<3;i++){
            scanf("%s",str[i]);
              for(int j=0;j<3;j++){

                if(str[i][j]=='X')
                    c++;
                else if(str[i][j]=='O')
                    o++;

        }

       }
       if(str[0][0]=='X'){
        if(str[0][1]=='X'&&str[0][2]=='X')
            cflag=1;
        if(str[1][0]=='X'&&str[2][0]=='X')
            cflag=1;
        if(str[1][1]=='X'&&str[2][2]=='X')
            cflag=1;
       }
       if(str[1][1]=='X'){
         if(str[0][1]=='X'&&str[2][1]=='X')
            cflag=1;
        if(str[2][0]=='X'&&str[0][2]=='X')
            cflag=1;
        if(str[1][0]=='X'&&str[1][2]=='X')
            cflag=1;
       }
       if(str[2][2]=='X'){
       if(str[2][0]=='X'&&str[2][1]=='X')
            cflag=1;
        if(str[0][2]=='X'&&str[1][2]=='X')
            cflag=1;

       }

       if(str[0][0]=='O'){
        if(str[0][1]=='O'&&str[0][2]=='O')
            oflag=1;
        if(str[1][0]=='O'&&str[2][0]=='O')
            oflag=1;
        if(str[1][1]=='O'&&str[2][2]=='O')
            oflag=1;
       }
       if(str[1][1]=='O'){
         if(str[0][1]=='O'&&str[2][1]=='O')
            oflag=1;
        if(str[2][0]=='O'&&str[0][2]=='O')
            oflag=1;
        if(str[1][0]=='O'&&str[1][2]=='O')
            oflag=1;
       }
       if(str[2][2]=='O'){
       if(str[2][0]=='O'&&str[2][1]=='O')
            oflag=1;
        if(str[0][2]=='O'&&str[1][2]=='O')
            oflag=1;

       }
       //printf("%d %d %d %d" ,c,o,cflag,oflag);
       if(c==o||c==o+1){
        if(cflag==1&&oflag==1)
        printf("no\n");
        else if(c==o&&cflag==1)
        printf("no\n");
        else if(c==o+1&&oflag==1)
        printf("no\n");
        else
            printf("yes\n");
       }
       else{
        printf("no\n");
       }


}

return 0;
}
