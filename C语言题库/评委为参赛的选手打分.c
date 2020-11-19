/*功能：在歌星大奖赛中，有10个评委为参赛的选手打分，分数为
      1~100分。选手最后得分为：去掉一个最高分和一个最低分
      后其余8个分数的平均值。请编写一个程序实现。
*/


#include<stdio.h>

void main()
{
  int score,i,max,min,sum;
  max=-32768;                  
  min=32767;                   
  sum=0;
  for(i=1;i<=10;i++)
  {
    printf("input number %d=",i);
    /***********SPACE***********/
    scanf("%d",&score);                        
    sum+=score;
    /***********SPACE***********/
    if(score > max) max=score;                        
    /***********SPACE***********/
    if(score < min)  min=score;                        
  }
  printf("Canceled max score:%d\nCanceled min score:%d\n",max,min);
  /***********SPACE***********/
  printf("Average score:%d\n",(sum-max-min)/8); 
}
