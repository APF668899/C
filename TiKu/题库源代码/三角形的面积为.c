/*���ܣ������ε����Ϊ��area=sqrt(s*(s-a)*(s-b)*(s-c)).����
      ��s=(a+b+c)/2,a��b��cΪ�����������ߵĳ�������������
      �����ĺ꣬һ��������s����һ��������area����д����
      �ڳ������ô������ĺ������area��
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
  scanf("%f,%f,%f",&a,��&b��,&c);
  if(a+b>c&&b+c>a&&c+a>b)
  {

    s=��S(a,b,c)��;
    area=��AREA(s,a,b,c)��;
    printf("area=%f\n",area);
  }
}

