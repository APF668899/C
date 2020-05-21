1.   有以下程序： 
main()
{  int y=10;
   do   { y--; }   while(--y);  
   printf(“%d\n”,y--);
}
程序的输出结果是：（ D）
a)  1        b)  -1       c)  8        d)   0

解析：
源码：
#include"stdio.h"
main(){
    int y=10;
    do{
        printf("%d\n",y);
        y--;
    }while(--y);  
    printf("%d\n",y--);
}


2.   有以下程序： 
main()
{  int x=3,y;
   do   
{ y=--x;
if( !y)  printf(“x”) ;
else  printf(“y”) ;
}  while(x);  
  }
程序的输出结果是：（ B）
a)  xyx        b)  yyx       c)  yxx        d)   yxy

解析：
源码：
#include"stdio.h"
main(){
    int y=10;
    do{
        printf("%d\n",y);
        y--;
    }while(--y);  
    printf("%d\n",y--);
}


3.   有以下程序段，此处do-while循环的结束条件是：（D ）
int n=0,p;
do {scanf(“%d”,&p);n++;} while (p!=12345&&n<3); 
  a)  p的值不等于12345并且n的值小于3
  b)  p的值等于12345并且n的值大于等于3
  c)  p的值不等于12345或者n的值小于3
  d)   p的值等于12345或者n的值大于等于3

解析：当 p!=12345&&n<3 时执行循环,所以当 p==12345&&n>=3 时结束循环
源码：
#include"stdio.h"
main(){
    int n=0,p;
    do{
        scanf("%d",&p);
        n++;
    }while(p!=12345&&n<3); 
}

4.   有以下程序： 
main(){
   int a,b,t;
   for(a=3,b=0 ;!a==b ;a--,b++) 
     if(a>b) { t=a;a=b;b=t;} 
   printf(“%d,%d\n”,a,b);
}
程序的输出结果是：（ D ）
a)  4,1      b)  1,4        c)  4,-1       d)   -1,4

解析：
源码：
#include"stdio.h"
main(){
    int a,b,t;
    for(a=3,b=0 ;!a==b ;a--,b++){
        printf("%d %d\n",a,b);
        if(a>b){//1,2,
            t=a;//3,-1
            a=b;//0,4
            b=t;//3,-1
        }
    }    
   printf("最终:%d,%d\n",a,b);
}



5.   有以下程序： 
main()
{  int x=3,y=0;
   do   
{ while( !y)  y=-x; 
}  while(x--);  
   printf(“%d,%d\n”,x,y);
}
程序的输出结果是：（B）
a)  -1,3      b)  -1,-3     c)  0,0       d)   1,-3   

解析：
源码：
#include"stdio.h"
main(){
    int x=3,y=0;
    do{ 
        printf("\n%d %d---",x,y);   
        while(!y){//1,
            printf("%d %d",x,y);   
            y=-x;//-3, 
        }
    }while(x--);  
    printf("\n最终%d,%d\n",x,y);
}


