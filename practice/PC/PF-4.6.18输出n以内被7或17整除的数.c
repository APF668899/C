#include"stdio.h"
int methodOne(int range){
   int i,m=0,s=0;
   for(i=1;i<=range;i++){
     if(i%2==0&&(i%7==0||i%17==0)){
         s=s+i;
         ++m;
     }
   }
   printf("sum1=%d\n",s);
}
int methodTwo(int range){
  int sum=0,j=14,m=1, i; 
  for(i=0;j<=range;j+=14,m++){      
      sum=sum+j;
      ++i;
      if(j+20*m<range && (j+20*m)%7!=0){
         sum=sum+j+20*m;
         ++i;
      }
   }
   printf("sum2=%d\n",sum);
}
main(){
  int range=99000;
  methodOne(range);
  methodTwo(range);
}
