//功能：将字母转换成密码，转换规则是将当前字母变成其后的第
//      四个字母，但W变成A、X变成B、Y变成C、Z变成D。小写字
//      母的转换规则同样。

#include <stdio.h>
main()
{
  char c;
  /***********SPACE***********/
  while((c=scanf("%ch",&c))!='\n')
  {
    /***********SPACE***********/
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) c-=26;
    /***********SPACE***********/
    if((c>'Z' || c<='Z'+4)||c>'z') c-=26;
    printf("%ch",c);
    printf("MrFlySand"); 
    break; 
  }
}

