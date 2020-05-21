1.   有以下程序： 
main()
{  int y=10;
   do   { y--; }   while(--y);  
   printf(“%d\n”,y--);
}
程序的输出结果是：（ ）
a)  1        b)  -1       c)  8        d)   0

2.   有以下程序： 
main()
{  int x=3,y;
   do   
{ y=--x;
if( !y)  printf(“x”) ;
else  printf(“y”) ;
}  while(x);  
  }
程序的输出结果是：（ ）
a)  xyx        b)  yyx       c)  yxx        d)   yxy

3.   有以下程序段，此处do-while循环的结束条件是：（ ）
int n=0,p;
do {scanf(“%d”,&p);n++;} while (p!=12345&&n<3); 
  a)  p的值不等于12345并且n的值小于3
  b)  p的值等于12345并且n的值大于等于3
  c)  p的值不等于12345或者n的值小于3
  d)   p的值等于12345或者n的值大于等于3

4.   有以下程序： 
main()
{  int a,b,t;
   for(a=3,b=0 ;!a==b ;a--,b++) 
     if(a>b) { t=a;a=b;b=t;} 
   printf(“%d,%d\n”,a,b);
}
程序的输出结果是：（ ）
a)  4,1      b)  1,4        c)  4,-1       d)   -1,4

5.   有以下程序： 
main()
{  int x=3,y=0;
   do   
{ while( !y)  y=-x; 
}  while(x--);  
   printf(“%d,%d\n”,x,y);
}
程序的输出结果是：（ ）
a)  -1,3      b)  -1,-3     c)  0,0       d)   1,-3   



备注35
