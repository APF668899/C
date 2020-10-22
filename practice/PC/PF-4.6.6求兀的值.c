#include"stdio.h"
#include"math.h"
int pai(){
   float s=0, t=1;
   float i=1, f=1;
   while(fabs(t)>1e-5){
      s=s+f/i;
      f=f*(-1);
      i+=2;
      t=1.0*f/i;
   }
   s *= 4;
   printf("0圆周率是%f\n",s);
}
int pai1(){
   float s=0, t=1;
   int i=1, f=1;
   while(fabs(t)>1e-5){
      s+=t;
      f=(i+1)/2%2==1 ? -1: 1;
      i+=2;
      t=1.0*f/i;
   }
   s *= 4;
   printf("1圆周率是%f\n",s);
}
int pai2(){
   float s=0, t=1;
   int i=1, f=1;
   while(fabs(t)>1e-5){
      s=s+f*1.0/i;
      f=f*(-1);
      i+=2;
      t=1.0*f/i;
   }
   s *= 4;
   printf("2圆周率是%f\n",s);
}
int main(){
   pai();
   pai1();
   pai2();
}