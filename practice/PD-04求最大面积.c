/*己知周长求最大面积,无墙*/
#include <stdio.h>
main()
{
  double c=0,a=0,b=0,x=0,y=0,s=0;
  printf("请输入矩形周长:\n");
  scanf("%lf",&c);
  double a=(c/2)*(c/2) ;
  double b=(c/2)*(c/2)/2;
  y=(c-x)/2;
  s=(c-x)/2*x;
  printf("S=x·y\n");
  printf(" =x·0.5(%lf－x)\n",c);
  printf(" =－0.5x²+%lfx\n",c/2);
  printf(" =－0.5(x²－%lfx+%lf)+%lf\n",c,a,b);
  printf(" =－0.5(x－%lf)²+%lf\n",c/2,b);
  printf("此时宽为y=0.5(%lf－%lf)=%lf\n",c,c/2,c/4);
  printf("长为%lf,宽为%lf,面积最大为%lf\n",c/2,c/4,b);
  return 0;
}
