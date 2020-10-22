#include <stdio.h>
 main(){
  int x,a,b,c;
  int exin=0;
  scanf("%d",&x);
    for(a=1;a<x;a++){
       for(b=1;b<x/2;b++){
          for(c=1;c<x/5;c++){
             if(a+b*2+c*5==x){
               printf("可以%d个1角%d个2角%d个5角得到%d元\n",a,b,c,x);
                 exin=1;
                 break;
             }
          }
        if(exin) break;
       }
     if(exin) break;
    }+
}