#include"stdio.h"
main(){
  static int a=5;//static保持变量内容的持久
  printf("%d",a--);
  if(a) main();
}
