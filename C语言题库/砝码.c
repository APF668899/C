/*���ܣ�һ��40���صİ����4�飬ÿ��������һ����������������
      4�鵱�����ܳƳ�1~40�����������������塣�������4��
      �ĸ���������
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
  int i,j,k,l,p,t1,t2,t3,t4;
  for(i=1;i<38;i++)
    /***********SPACE***********/
    for(��j=1��;j<38-i;j++)
      /***********SPACE***********/
      for(k=j;k<��38-i-j��;k++)
      {
        l=40-i-j-k;
        for(p=1;p<40;p++)
        {
          for(t1=-1;t1<2;t1++)
            for(t2=-1;t2<2;t2++)
              for(t3=-1;t3<2;t3++)
                for(t4=-1;t4<2;t4++)
                  /***********SPACE***********/
                  if(��i*t1 + j*t2 + k*t3 + l*t4��== p) goto next;
          break;
          /***********SPACE***********/
          next:if(p==��39��)
               {
                  printf("%d,%d,%d,%d\n",i,j,k,l);
                  exit(0);
               }
      }
  }
  printf("error.");
}


