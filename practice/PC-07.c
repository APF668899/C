1、有以下程序：
#include"stdio.h"
main(){  
	int a=15,b=21,m=0;
	switch(a%3){
		case 0: m++;break;
        case 1: m++;
        switch(b%2){
			default: m++;
            case 0: m++;break;
        }
      }
    printf("%d\n",m);
}
程序的输出结果是：（a ）
  a)  1       b)  2       c)  3       d)  4

2、以下while循环中，循环体执行的次数是：（ d）
k=1;
while (--k)  k=10;
  a)  10次   b)  无限次  c)  一次也不执行  d)  1次
  
#include"stdio.h"
main(){  
	int k=1;
	while(--k){
		k=10;
		printf("1");
	}
	printf("%d",k);
}  

3、有以下程序段，其中x为整型变量，以下选项中叙述正确
的是：（b ）
x=0;
while (!x!=0)  x++;  x!=0false   true
  a)  退出while循环后，x的值为0
  b)  退出while循环后，x的值为1
  c)  while的控制表达式是非法的
  d)   while循环执行无限次

#include"stdio.h"
main(){  
	int x=0;
	
	printf("%d %d\n",x!=0,!x!=0);	
	while (!x!=0){
		printf("a\n");
		x++;
	}
	printf("%d",x);
}  

4、有以下程序段，其中n为整型变量，执行后输出结果是：（c）
     n=20 ;
     while(n--) ;  printf("%d",n) ; 
  a) 2        b)  10       c)  -1        d)   0
#include"stdio.h"
main(){  
	int n=20 ;
    while(n--);
	printf("%d",n) ;
}  

5、有以下程序段，其中t为整型变量，以下选项中叙述正确的是：（ b）
t=1;
while (-1) { 
 t--;
 if(t)  
 break;
}
  a)  循环一次也不执行
  b)  循环执行一次
  c)  循环控制表达式(-1)不合法
  d)   循环执行2次
#include"stdio.h"
main(){  
	int t=1;
	while (-1){ 
		t--;		
 		if(t){  
			printf("%d\n",t);
			break;			
		}
	}
}  

