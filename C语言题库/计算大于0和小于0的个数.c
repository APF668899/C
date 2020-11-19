#include <stdio.h>
main()
{
  int n,i,j;
  printf("Enter iNT number,with 0 to end\n");
  i=j=0;
  scanf("%d",&n);
  while(n!=0)
 {
   /***********SPACE***********/
   if(n>0)i=i+1;
   /***********SPACE***********/
   if(n<0)j=j+1;
   /***********SPACE***********/
   scanf("%d",&n);
 }
  printf("i=%d j=%d\n",i,j);
}


