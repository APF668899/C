
/*****构造素数表**********************************
①构造一个数组
②i循环,令数组里面的数全是1
③x循环,如果2是isPrime素数,i循环,不是素数
④把所有标记为1的素数i输出
*************************************************/
#include<stdio.h>
int main()
{
 int n = 200;	//求100以内的素数  
 int one[n];	//有100个数
 int a;
 int x;
 for (a = 1; a < n; a++)
 {
  one[a] = 1;	//令数组里面的数全是1 
//	printf("a=%d ", a);
//	printf("one[a]=%d ", one[a]);
 }
 for (x = 2; x < n; x++)
 {
  if (one[x])	//如果2是isPrime素数   
  {
//	printf("x=%d ", x) ;
 //	printf("one[x]=%d ", one[x]);
   //这个数的所有倍数都标记为0,及不是素数     
   for (a = 2; a * x < n; a++)
   {
    one[a * x] = 0;
//	printf("a%d*x%d=%d ", a,x,a * x) ;
//	printf("one[a*x]=%d\n\n", one[a * x]);
   }
  }
 }
 //把所有标记为1的素数输出i 
 printf("素数有:");
 for (x = 2; x < n; x++)
 {
  if (one[x])
  {
   printf("%d ", x);
//	printf("one[x]=%d\n", one[x]);
  }
 }
 printf("\n");
 return 0;
}
