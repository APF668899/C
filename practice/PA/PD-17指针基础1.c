#include <stdio.h>
int main(){
    int a, b;
    int *pointer_1, *pointer_2;
    a=100;
    b=200;
    pointer_1 = &a;//将a的地址赋给p1
    pointer_2 = &b;//将b的地址赋给p2
    printf("a = %d,b = %d\n", a, b);
    printf("&a = %d, &b =%d\n", &a, &b);
    printf("*p1 = %d, *p2 = %d\n", *pointer_1, *pointer_2);//取指针指向的值
    printf("&p1 = %d,&p2 = %d\n", &pointer_1, &pointer_2);
    printf("p1 = %d, p2 = %d\n", pointer_1, pointer_2);

   int x = 12, y =3 ;
   int *px = &x, *py = &y;
   printf("x =% d, y = %d\n",*px, *py);
   
   int c =3, d=4;
   //int *pc = c, *pd = d;//error
   //printf("c = %d, d = %d\n",*pc , *pd);
   
   int e=22, f=33;
   //int pe = &e, pf = &f;//error
   //printf("c = %d, d = %d\n",*pe , *pf);
   
   int g=64, h=35;
   int *pg = &g, *ph=&h;
   printf("pg=%d, ph=%d", pg, ph);
} 