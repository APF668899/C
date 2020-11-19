#include<stdio.h>

void  main()
{
  int n=0,c;
  c=getchar();
/***********SPACE***********/
  while(c!='\n') 
  {
/***********SPACE***********/
    if(c>='0'&& c<='9')
    n++;  
    c=getchar();
  }
  printf("%d",n);
}

