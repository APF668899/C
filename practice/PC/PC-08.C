1、有以下程序段，其中x为整型变量，以下选项中叙述正确的是：（b ）
x=-1;
do
{;}
while (x++); 
printf(“x=%d”,x);
  a)  该循环没有循环体，程序错误
  b)  输出x=1
  c)  输出x=0
  d)  输出x=-1
	  
解析：
#include "stdio.h"
main(){
	int x = -1;
	do{
	    printf("%d  ",x);
	}while(x++);
	printf("x=%d",x);
}

2、有以下程序段，其中x,y为整型变量，程序输出结果是：(a)
 for(x=0,y=0;(x<=1)&&(y=1);x++,y--)  ;
 printf(“x=%d,y=%d”,x,y);
a)  x=2,y=0                 b)  x=1,y=0  
c)  x=1,y=1                 d)  x=0,y=0

解析：
y = 1是赋值
&& 运算：前面为0后面不做
#include"stdio.h"
main(){
	int x,y;
	for(x=0,y=0;(x<=1)&&(y=1);x++,y--){
	    printf("x=%d,y=%d\n",x,y);
	}	
    printf("最终x=%d,y=%d",x,y);
}

3、有以下程序： 
#include"stdio.h"
main(){
    int x=0,y=0;
    while(x<5 && ++y) y--,x++;
    printf("%d,%d",y,x);
}
程序的输出结果是：（ a）
  a)  0,5       b)  1,5       c)  0,4       d) 

 解析：	
#include"stdio.h"
main(){
    int x=0,y=0,i=1;
    while(++y && x<5){
		printf("第%d次进入循环,%d,%d\n",i,y,x);
		y--;
		x++;
		i++;
	}
    printf("%d,%d",y,x);
}


4、有以下程序： 
#include"stdio.h"
main(){
   int num=0;
   do{
       num++ ;
       printf("%d\n",num); 
   }while(num<=2);
}
程序的输出结果是：（b ）
  a)  1         b) 1         c)  1         d)   1  
      2            2             2
                   3             3
                                 4

5、有以下程序： 
#include"stdio.h"
main(){  
    int x=3,i=1;
    do{ 
       printf("第%d次进入循环,%d %d   ",i,x,!x);
       printf("x为:%d\n",x=x-2);
       i++;
   }while(!(--x));  
}
程序的输出结果是：（c ）
a)  1        b)  3  0      c)  1  -2       d)   死循环
