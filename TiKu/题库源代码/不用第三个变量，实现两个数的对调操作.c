//功能：不用第三个变量，实现两个数的对调操作。
#include <stdio.h>
main()
{ 

  int a,b;
  scanf("%d %d",&a,&b);  
  printf("a=%d,b=%d\n",a,b);  
  a= a+b;//5+10    
  
  b= a-b ;//15-10                          
  
  a= a-b ;//15-5                        
  
  printf("a=%d,b=%d\n",a,b);
  
}

