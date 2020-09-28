一、程序填空   共10题 （共计100分）
第1题 （10.0分）        题号:333        难度:易        第6章/*【程序填空】功能：下面的程序是求1!+3!+5!+……+n!的和。*/
#include <stdio.h>
main(){  
long int f,s;
  int i,j,n;    
   【?】;  
   scanf("%d",&n);       
    for(i=1;i<=n; 【?】)   {    
      f=1;   
                             for(j=1; 【?】;j++)   
                               【?】;   
            s=s+f; 
      }  
      printf("n=%d,s=%ld\n",n,s);
}
```c
//下面的程序是求1!+3!+5!+……+n!的和
#include <stdio.h>
main(){ 
  long int f,s; 
  int i,j,n; 
  s=0;  
  scanf("%d",&n);   
  for(i=1;i<=n;i+=2){    
    f=1;         
    for(j=1;j<=i;j++){ 
      f *= j;   
    } 
    s=s+f;  
  } 
  printf("n=%d,s=%ld\n",n,s);
}
```

第2题 （10.0分）        题号:337        难度:中        第6章
/*【程序填空】功能：以每行5个数来输出300以内能被7或17整除的偶数，并求出      其和。*/
#include <stdio.h>
#include <conio.h>main(){  int i,n,sum;  sum=0;  【?】;  for(i=1; 【?】 ;i++)    if(【?】)      if(i%2==0)      {         sum=sum+i;         n++;         printf("%6d",i);                if(【?】)              printf("\n");      }   printf("\ntotal=%d",sum);}第3题 （10.0分）        题号:338        难度:中        第6章/*【程序填空】功能：以下程序的功能如(图1)。*/#include <stdio.h>#include <math.h>main(){   int f;   【?】;  double t,pi;  t=1;pi=t;f=1;n=1.0;  while(【?】 )  {    n=n+2;      【?】;    t=f/n;    pi=pi+t;  }  【?】;   printf("pi=%10.6f\n",pi);}第4题 （10.0分）        题号:339        难度:难        第6章/*【程序填空】功能：输出由字符w构造成的形如W的图形。w        ww        w w      w  w      w  w    w    w    w   w  w      w  w    ww        ww*/#include <stdio.h>  /***********SPACE***********/void 【?】(int n){   int i,j,k,r,m;  for(i=1; 【?】;i++)  {    for(j=1;j<=2;j++)    {      for(r=1;r<i;r++)printf(" ");        printf("w");              for(k=1; 【?】 ;k++)printf(" ");           printf("w");           for(m=1;m<i;m++)printf(" ");    }      【?】;  }}#include <conio.h>main(){  int n;  printf("input a number:");  【?】;  draw(n);}第5题 （10.0分）        题号:340        难度:中        第6章/*【程序填空】功能：求100－999之间的水仙花数说明：水仙花数是指一个三位数的各位数字的立方和是这个数本身。例如：153＝1^3＋5^3＋3^3）。*/#include <stdio.h>int fun(int n){ int i,j,k,m;  m=n;   【?】;  for(i=1;i<4;i++)  {         【?】;     m=(mj)/10;      k=k+j*j*j;   }  if(k==n)       【?】;  else     return(0);}main(){    int i;  for(i=100;i<1000;i++)    if(【?】==1)    printf("%d is ok!\n" ,i);}第6题 （10.0分）        题号:343        难度:中        第6章/*【程序填空】功能：输出100到1000之间的各位数字之和能被15整除的所有数，      输出时每10个一行。*/#include <stdio.h>main(){  int m,n,k,i=0;  for(m=100;m<=1000;m++)  {      【?】;    n=m;    do    {          k=k+【?】 ;       n=n/10;     }        【?】;     if (k%15==0)     {        printf("%5d",m);i++;              if(i%10==0) 【?】;      }   }}第7题 （10.0分）        题号:344        难度:中        第6章/*【程序填空】功能：分别求出一批非零整数中的偶数、奇数的平均值，用零作      为终止标记。*/#include <stdio.h>main(){  int x,i=0,j=0;  float s1=0,s2=0,av1,av2;  scanf("%d",&x);  while(【?】)  {     if(x%2==0)      {        s1=s1+x;        i++;     }        【?】     {        s2=s2+x;        j++;     }        【?】;   }   if(i!=0)       av1=s1/i;   else        av1=0;   if(j!=0)         【?】 ;   else      av2=0;   printf("oushujunzhi:%7.2f,jishujunzhi:%7.2f\n",av1,av2);}第8题 （10.0分）        题号:349        难度:易        第6章/*【程序填空】功能：求两个非负整数的最大公约数和最小公倍数。*/#include <stdio
