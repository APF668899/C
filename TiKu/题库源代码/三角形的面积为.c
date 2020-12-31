/*功能：三角形的面积为：area=sqrt(s*(s-a)*(s-b)*(s-c)).其中
      ，s=(a+b+c)/2,a、b、c为三角形三条边的长。定义两个带
      参数的宏，一个用来求s，另一个用来求area。编写程序，
      在程序中用带参数的宏求面积area。
*/
#include <stdio.h>
#include "math.h"
#define S(x,y,z)(x+y+z)/2
#define AREA(s,x,y,z)sqrt(s*(s-x)*(s-y)*(s-z))
main()
{
  double area;
  float a,b,c,s;
  printf("a,b,c=");
  scanf("%f,%f,%f",&a,【&b】,&c);
  if(a+b>c&&b+c>a&&c+a>b)
  {

    s=【S(a,b,c)】;
    area=【AREA(s,a,b,c)】;
    printf("area=%f\n",area);
  }
}

