#include<stdio.h>
int main(){
   int x;
   scanf("%d",&x);
   switch(x){
   case 1:
     printf("优秀");
     break;
   case 2:
     printf("良好");
     break;
   case 3:
     printf("不错");
     break;
   default:
 printf("继续努力");
    }
}