/*第4题 （10.0分）        题号:1070        难度:中        第7章
-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目：功能：输入一行字符，分别统计出其中英文字母、空格、数字和
      其它字符的个数。
-------------------------------------------------------*/
#include <stdio.h>
main()
{
/***********SPACE***********/
  char c;
  int letters=0,space=0,digit=0,others=0;
  printf("please input some characters\n");
/***********SPACE***********/
  while((c=getchar())!='\n')
  {
/***********SPACE***********/
    if(c>='a'&&c<='z' || c>='A'&&c<='Z')
      letters++;
/***********SPACE***********/
    else if(c==32)
      space++;
/***********SPACE***********/
    else if(c>='0'&&c<='9')
      digit++;
    else
/***********SPACE***********/
      others++;
  }
  printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,space,digit,others);
}

