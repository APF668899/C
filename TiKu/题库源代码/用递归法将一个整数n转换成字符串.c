/*���ܣ��õݹ鷨��һ������nת�����ַ�������������483��Ӧ���
      ��Ӧ���ַ���"483"��n��λ����ȷ��������������λ������
      ����
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

