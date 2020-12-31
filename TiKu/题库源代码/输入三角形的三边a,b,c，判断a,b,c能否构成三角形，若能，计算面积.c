/*第9题 （10.0分）        题号:964        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

功能：输入三角形的三边a,b,c，判断a,b,c能否构成三角形，若能，计算面积。

-------------------------------------------------------*/
#include<stdio.h>
/***********SPACE***********/
#include<math.h>
void main()
{
/***********SPACE***********/
	double  a,b,c,area;
	double s;
    printf("Please enter three sides of a triangle:\n");
	scanf("%f,%f,%f",&a,&b,&c);
/***********SPACE***********/
s=(a+b+c)/2;
/***********SPACE***********/
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of the triangle is:%lf\n",area);
/***********SPACE***********//*
if(a+b<c || a+c<b || b+c<a)
  printf("They can't form a triangle.\n");
else
  printf("The area of the triangle is:%f\n",area);*/
}


