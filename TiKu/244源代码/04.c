/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------

功能：输出由字符w构造成的形如W的图形。

w        ww        w
 w      w  w      w
  w    w    w    w
   w  w      w  w
    ww        ww

-------------------------------------------------------*/
#include <stdio.h>
  /***********SPACE***********/
void draw(int n)
{ 
  int i,j,k,r,m;
  /***********SPACE***********/
  for(i=1; i<=n;i++)//输出5行
  {
	 for(j=1;j<=2;j++)//输出2个vv
    {
      for(r=1;r<i;r++)//输出第一个w前的空格
        printf(" ");
      printf("w");
        /***********SPACE***********/
        for(k=1; k<=2*n-2*i;k++)//输出第一个w后面的空格
	   printf(" ");
        printf("w");
        for(m=1;m<i;m++)
	   printf(" ");
    }
    /***********SPACE***********/
    printf("\n");
  }
}
#include <conio.h>
main()
{
  int n;
  printf("input a number:");
  /***********SPACE***********/
  scanf("%d",&n);
  draw(n);
}
