题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>
#include <math.h>
main()
{
/***********SPACE***********/
  long int i,x,y;
  for(i=1;i<100000;i++)
  {
      x=sqrt(i+100);      
/***********SPACE***********/
      y=sqrt(i+268);
/***********SPACE***********/
     if(x*x==i+100 && y*y==i+268)
/***********SPACE***********/
      printf("\n%ld\n",i);
   }
} 
