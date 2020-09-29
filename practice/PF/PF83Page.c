#include<stdio.h>
main()
{
  int i,f,s;
  i=1;
  f=1;
  s=0;
  while(i<=100){
    s=s+i*f;
    f=-f;
    i++; 
  }
  printf("%d",s);
}