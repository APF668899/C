#include <stdio.h>
main()
{
 {
  char a;
  a = 'a' + 'b' + 'd';	//65+66+68
  printf("％c→%d\t", a);
  printf("％c→%c\t", 65);
 }
 {	//进制转换
  int a = 20;
  printf("％d→%d\t", a);	//整形变量读取
  printf("％o→%o\t", a);	//十进制→八进制
  printf("％x→%x\t", a);	//十进制→十六进制
  printf("％X→%X\t", a);	//十进制→十六进制
 }
 printf("％f→%f\n", 0.1);
 printf("％lf→%lf\n", 0.1);
 {	//字符输入与读取
  char st[10];
  printf("Input string:");
  scanf("%s", st);
  printf("％s→%s\t", st);
 }
 return 0;
}
