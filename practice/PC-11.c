---
title: 2020-06-05未命名文件 
tags: 新建,模板,小书匠
renderNumberedHeading: true
grammar_cjkRuby: true
---

1.  以下程序的运行结果是-1
#include"stdio.h"
main(){
    int a=0,b=0,c;
    if(a>b)  c=1;
    else  if(a=b)  c=0;
    else  c=-1;
    printf("%d\n",c);
}

2.  若有定义：int a=5,b=4,c=9;以下语句的执行结果是###a=6,b=3,c=9
#include"stdio.h"
main(){
    int a=5,b=4,c=9;
    // printf("%d", a++<=5&&b--<=2&&c++);
    printf("%d",a++<=5&&b--<=2);
    a++<=5&&b--<=2&&c++ ?  printf("***a=%d,b=%d,c=%d\n",a,b,c) : printf("###a=%d,b=%d,c=%d\n",a,b,c);
    
}

3.	若从键盘上输入3和4，执行以下程序后的输出结果是36
#include"stdio.h"
main(){
    int a=0,b=0,s=0;
    scanf("%d %d",&a,&b);//3 4
    printf("Judge:%d\n",a<b);
    if(a<b) s=b*a,s*=a;//3*4*3
    printf("%d\n",s);
}

4.	若从键盘上输入58，则以下程序的输出结果是585858
#include"stdio.h"
main(){
    int a;
    scanf("%d",&a); //58
    printf("%d",a);
    if(a<50) printf("%d",a);
    if(a>40) printf("%d",a);
    if(a>30) printf("%d",a);
}

5.	以下程序的运行结果是!#
#include"stdio.h"
main(){
    int a=0,b=4,c=5;
    switch(a==0){
        case 1: 
            switch(b<0){
                case  1: printf("@"); break;
                case  0: printf("!"); break;//跳出当前循环,继续执行case语句
            }
        case 0: 
            switch(c==5){
                case  0: printf("*"); break;
                case  1: printf("#"); break;
                default: printf("1");
            }
        break;
        default: printf("&");
    }
}

