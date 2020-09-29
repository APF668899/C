#include"stdio.h"
/*一列数的规则如下: 1、1、2、3、5、8、13、21、34... 求前n项的和*/
//递归实现,前n项求和
int sequenceFun(int x,int y, int n){
     static int i=1;
     if(i==1) printf("%-5d", 1);
     if(n==1) return 1;
     if(n==2){
         printf("%-5d%-5d", 1, 1);
         return 2;
     }  
     if(++i==n+1) return y;
     int z=x+y;
     printf("%-5d", y+x);
     if(i%10==0) printf("\n");
     y=sequenceFun(y,z,n)+y;
     return y;
}
//循环求前n项的和
int sequence(int n){
      int a=1, b=1, s=2;
      if(n==1){
         printf("1");
         return 1;
     }
     if(n==2){
         printf("%-5d%-5d", 1, 1);
         return 2;
     }
      printf("%-5d%-5d", a, b);
      int c;
      for(int i=3;i<=n;i++){
           c=a+b;
           s+=c;
           a=b;
           b=c;
           printf("%-5d", c);
           if(i%10==0) printf("\n");
      }
      return s;
}
int main(){
     int n=20;
     printf("\n前%d位的和是:%d\n",n, sequenceFun(0,1,n));
     printf("\n前%d位的和是:%d\n",n, sequence(n));
}