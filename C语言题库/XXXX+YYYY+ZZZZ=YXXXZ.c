#include <stdio.h>
main()
{
  int i,f1=0,f2=1;
  /***********SPACE***********/
  for(i=0;;i++)
  {
    printf("--%d",f1);//0
    /***********SPACE***********/
    if(f1>200) break;
    printf("--%d",f2);//1
    if(f2>200) break;
    if(i%2==0) printf("\n");
    f1+=f2;//1
    /***********SPACE***********/
    f2+=f1;
  }
  printf("\n");
}

