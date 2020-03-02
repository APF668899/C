#include<stdio.h>
main()
{
 int a = 1, sum = 0, i = 0, b;
 char c = '+';
 double yuan;
 printf("请输入在线人数:");
 while (a != 0 && c == '+')
 {
  scanf("%d", &a);
  scanf("%c", &c);

  if (a > 1 && a <= 200)
   b = 1;
  if (a > 200 && a <= 500)
   b = 2;
  if (a > 500 && a <= 900)
   b = 3;
  if (a > 900 && a <= 1400)
   b = 4;
  if (a > 1400 && a <= 2000)
   b = 5;
  if (a > 2000 && a <= 2500)
   b = 6;
  if (a > 2500 && a <= 3000)
   b = 7;

  if (a != 0 && c == '+')
   printf("%d+", b);
  else
   printf("%d\n", b);
  sum = sum + b;
 }
 yuan = sum / 100.0;
 printf("你应该支付%f元", yuan);
}
