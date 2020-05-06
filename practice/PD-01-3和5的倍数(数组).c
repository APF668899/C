/***********************************
1.让所有数为1
2.不是三和五的倍数为0
3.输出所有为1的数     
***********************************/
#include <stdio.h>
int main()
{
 int n;
printf("请输入取值范围:");
 scanf("%d", &n);//n以内的数
 int one[n];//定义数组
 int a, b;

 for (a = 0; a <= n; a++)
 {
  one[a] = 1;//让所有数为1
// printf("one[a=%d]=%d \t", a, one[a]);

 }
 printf("\n");

 for (b = 2; b <= n; b++)
 {
  if (one[b])//如果是1继续执行
  {
// printf("one[b=%d]=%d\n", b, one[b]);
   for (a = 1; a * b <= n; a++)
   {
// printf("a=%d\n", a);
    if (a % 30 != 0)
    {
     if (a * b % 30 != 0)
     {
/*int ab;
      ab = a * b;
      printf("a=%d b=%d a×b=%d\t", a,
            b, ab);
*/ one[a * b] = 0;
/*printf("one[%d]=%d\n", ab,
             one[a * b]);
                        printf("one[a*b=%d%×%d]=0\n\n\n", a, b);
*/ }
         }
         }
      }
     }

 printf("是三和五的倍数有:");
 for (a = 2; a <= n; a++)
 {
  if (one[a])
  {
   printf("%d ", a);
/*printf("是3和5的倍数a=%d\t", a);
   printf("one[a]=%d\n", one[a]);
*/ }
   }
 return 0;
}
