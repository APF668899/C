#include"stdio.h"
double myPow(double x, int n){
   if(n == 0)
       return 1;
   double t = myPow(x, n/2); 
   printf("%d %lf\n", n, t);  
   if(n % 2 == 0){
     //   printf("-%d %lf\n", n, t);
        return t*t;
   }
   else{
      if(n > 0){
      //    printf("--%d %lf\n", n, t);
          return x*t*t;
      }else{
     //      printf("---%d %lf\n", n, t);
          return (t*t) / x;
      }
   }
}
/*double myPow1(double x,int n){
   if(n==0) return 1;
   if(n<0){
        return 1/myPow(x,-n);
   }
   return myPow(x,--n)*x;
}*/
main(){
   printf("%lf",myPow(2,3));
}

