#include"stdio.h"
int main(){
   int n, x,t;
   scanf("%d",&n);
   x=0;
   while(n!=0){
      t=n%2;
      n=n/2;
      x=x*2+t;
   }
   printf("\n最终%d",x);
}