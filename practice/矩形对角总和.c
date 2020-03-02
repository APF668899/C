#include<stdio.h>
main()
{
 int one[4][4], m, n, sum = 0;
 printf("Please enter 12 numbers:");
 for (m = 0; m < 4; m++)
  for (n = 0; n < 4; n++)
   scanf("%d", &one[m][n]);
 printf("\n数字方正矩形如下\n");
 for (m = 0; m < 4; m++)
 {
  for (n = 0; n < 4; n++)
  {
   printf("%d ", one[m][n]);
   sum = sum + one[m][n];
  }
  printf("\n");
 }
 printf("\nThe diagonal sum is =");
 for (m = 0, n = 0; m < 4, n < 4; m++, n++)
 {
  printf("%d+", one[m][n]);
  sum = sum + one[m][n];
 }
 for (m = 0, n = 3; m < 4, n > -1; m++, n--)
 {
  if (m == 3)
  {
   sum = sum + one[m][n];
   printf("%d=%d", one[m][n], sum);

  } else
  {
   sum = sum + one[m][n];
   printf("%d+", one[m][n]);
  }
 }

}

//65 51 58 25 63 96 79 94 28 84 35 46 53 26 82 16
