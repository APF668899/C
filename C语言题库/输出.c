//功能：要求输出如下结果：
//      b=-1  a=65535
//      a=65534
//      a=30 b=6 c=5

#include <stdio.h>
main()
{
  /***********SPACE***********/
  int b=-1,c=5;unsigned a;
  /***********SPACE***********/
  a=65535;
  printf("b=%d a=%u\n",b,a);
  /***********SPACE***********/
  a+=b;
  printf("a=%u\n",a);
  /***********SPACE***********/
  b=(a=30)/c;
  printf("a=%d b=%d c=%d\n",a,b,c);
}

