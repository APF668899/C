//���ܣ�����ƽ���ɼ���ͳ��90������������

#include <stdio.h>
main()
{ 
  int n,m;
  float grade,average;
  average=0.0;
  /***********SPACE***********/
  n=m=0;
  while(1)
  {
    /***********SPACE***********/
   scanf("%f",&grade);
    if(grade<0) break;
    n++;
    average+=grade;
    /***********SPACE***********/
    if(grade<90) continue;
    m++;
  }
  if(n) printf("%.2f %d\n",average/n,m);
}

