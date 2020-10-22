//1+1/2+1/3+1/4+...
#include"stdio.h"
main(){
 int n;
 scanf("%d",&n);
 int i;
 double sum=0;
   for(i=1;i<=n;i++){
      sum+=1.0/i;
   }
 printf("%.2f",sum);
}