//功能：计算平均成绩并统计90分以上人数。

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

