#include <stdio.h>
main(){
  int a=0;
  int b=0;
  printf("请输入票面和商品价格");
  scanf("%d%d",&a,&b);
  if(a>=b){
     printf("应该找您%d\n",a-b);
  }else{
     printf("您的钱不够\n");
  }
}
