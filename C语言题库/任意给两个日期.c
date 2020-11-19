#include  <stdio.h>
#include <stdlib.h>

int f(int y)
{
  return(y%4==0&&y%100!=0||y%400==0);     /*闰年1，平年0*/
}

int mday(int y,int m)
{
  return(31-((m==4)+(m==6)+(m==9)+(m==11))-(3-f(y))*(m==2)); /*这个月有几天*/
}

int yday(int y,int m,int d)  
{
return(d+31*((m>1)+(m>3)+(m>5)+(m>7)+(m>8)+(m>10))+30*((m>4)+(m>6)+(m>9)+(m>11))+(28+f(y))*(m>2));
}         /*这一年过了多少天*/

int yend(int y,int m,int d)
{
  return(365+f(y)-yday(y,m,d));
}           /*这一年剩下多少天*/



main()
{
  int y1,m1,d1,y2,m2,d2,n,i;
  printf("y1,m1,d1=");
  scanf("%d,%d,%d",&y1,&m1,&d1);
  /***********SPACE***********/
  if(m1<1||m1>12||d1<1||d1>【31】) exit(0);
  printf("y2,m2,d2=");
  scanf("%d,%d,%d",&y2,&m2,&d2);
  /***********SPACE***********/
  if(m2<1||m2>12||d2<1||d2>【31】) exit(0);
  if(y1>y2||y1==y2&&m1>m2||y1==y2&&m1==m2&&d1>d2)
  {
    n=y1;
    y1=y2;
    y2=n;
    n=m1;
    m1=m2;
    m2=n;
    n=d1;
    d1=d2;
    d2=n;
  }
  else
  {
    /***********SPACE***********/
    n=yend(y1,m1,d1)+【365】;
    /***********SPACE***********/
    for(i=【1】;i<y2;i++) n+=365+f(i);
  }
  printf("%d.%d.%d--->%d.%d.%d:n=%d\n",y1,m1,d1,y2,m2,d2,n);
}
