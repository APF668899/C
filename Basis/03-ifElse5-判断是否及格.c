#include<stdio.h>

int main(){
   int a=60;
   int b;
   printf("输入一个整数:");
   scanf("%d",&b);
   if(b<a){
      printf("很遗憾，您没有及格。");
          }
   else{
      printf("祝贺您，这个成绩及格了。");
   printf("再见。\n");
       }
return 0;
}