/*��9�� ��10.0�֣�        ���:964        �Ѷ�:��        ��7��
-------------------------------------------------------
��������ա�
---------------------------------------------------------

���ܣ����������ε�����a,b,c���ж�a,b,c�ܷ񹹳������Σ����ܣ����������

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


