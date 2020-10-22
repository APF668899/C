#include"stdio.h"
int main(){
   int a=12,*p;
   p=&a;//指向a的地址
   printf("%d\n",*p);//输出p指向a的地址中的值12
   int b=56;
   p=&b;//改变指针p指向的地址为b的地址
   printf("%d\n",*p);//输出p指向b的地址中的值56
   printf("%d %d\n",a,b);//原变量值不变，输出12 56
}