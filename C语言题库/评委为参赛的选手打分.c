/*���ܣ��ڸ��Ǵ����У���10����ίΪ������ѡ�ִ�֣�����Ϊ
      1~100�֡�ѡ�����÷�Ϊ��ȥ��һ����߷ֺ�һ����ͷ�
      ������8��������ƽ��ֵ�����дһ������ʵ�֡�
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
