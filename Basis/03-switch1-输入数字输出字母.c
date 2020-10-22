#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   switch(a){
      case 10:
      case 65:
         printf("A\n");
         break;1
      case 66:
         printf("B\n");
         break;
      case 67:
         printf("C\n");
         break;
      case 68:
         printf("D\n");
         break;
      default:
         printf("Error\n");
         break;
   }
}