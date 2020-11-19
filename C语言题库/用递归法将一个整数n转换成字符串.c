/*功能：用递归法将一个整数n转换成字符串，例如输入483，应输出
      对应的字符串"483"。n的位数不确定，可以是任意位数的整
      数。
*/

#include <stdio.h>

void convert(int n)
{
  int i;
  /***********SPACE***********/
  if((i = n/10)!=0){
  	//printf("[%d] ",i);
  	convert(i);
  }                            
  /***********SPACE***********/
  putchar(n%10+'0');                
}

main()
{
  int number;
  printf("\ninput an integer:");
  scanf("%d",&number);
  printf("Output:");
  if(number<0)
  {
    putchar('-');
    /***********SPACE***********/
    number = number * (-1);                        
  }
  convert(number);
}

