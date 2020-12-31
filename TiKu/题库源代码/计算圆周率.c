//功能：计算圆周率的近似值。
#include <stdio.h>
#include <math.h>
main()
{
  /***********SPACE***********/
  double pi,t,s,n;
  t=1;pi=0;n=1;s=1;
  /***********SPACE***********/
  while(fabs(t)>=2e-6)
  {
        pi+=t;n+=2;s=-s;t=s/n;
  }
  /***********SPACE***********/
  pi*=4;
  printf("pi=%.6f\n",pi);
}

