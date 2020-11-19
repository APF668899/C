/*功能：一个40磅重的板碎成4块，每块正好是一个整数磅，且用这
      4块当砝码能称出1~40磅的整数重量的物体。编程求这4块
      的各自重量。
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
  int i,j,k,l,p,t1,t2,t3,t4;
  for(i=1;i<38;i++)
    /***********SPACE***********/
    for(【j=1】;j<38-i;j++)
      /***********SPACE***********/
      for(k=j;k<【38-i-j】;k++)
      {
        l=40-i-j-k;
        for(p=1;p<40;p++)
        {
          for(t1=-1;t1<2;t1++)
            for(t2=-1;t2<2;t2++)
              for(t3=-1;t3<2;t3++)
                for(t4=-1;t4<2;t4++)
                  /***********SPACE***********/
                  if(【i*t1 + j*t2 + k*t3 + l*t4】== p) goto next;
          break;
          /***********SPACE***********/
          next:if(p==【39】)
               {
                  printf("%d,%d,%d,%d\n",i,j,k,l);
                  exit(0);
               }
      }
  }
  printf("error.");
}


