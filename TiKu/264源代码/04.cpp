/*��4�� ��10.0�֣�        ���:1070        �Ѷ�:��        ��7��
-------------------------------------------------------
��������ա�
---------------------------------------------------------

��Ŀ�����ܣ�����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ�
      �����ַ��ĸ�����
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

