1.  以下程序的运行结果是_____.
   main()
   { int a=0,b=0,c;
    if(a>b)  c=1;
    else  if(a=b)  c=0;
    else  c=-1;
    printf(“%d\n”,c);
   }
2.  若有定义：int a=5,b=4,c=9;,以下语句的执行结果是___________ 。
a++<=5&&b--<=2&&c++ ?  printf(“***a=%d,b=%d,c=%d\n”,a,b,c)  ：printf(“###a=%d,b=%d,c=%d\n”,a,b,c);

3.	若从键盘上输入3和4，执行以下程序后的输出结果是_____.
   main()
   { int a=0,b=0,s=0;
    scanf(“%d%d”,&a,&b);
    if(a<b)  s=b*a,s*=a;
    printf(“%d\n”,s);
    }

4.	若从键盘上输入58，则以下程序的输出结果是__.
main()
   { int a;
    scanf(“%d”,&a); printf(“%d”,a);
      if(a<50)  printf(“%d”,a);
         if(a>40)  printf(“%d”,a);
             if(a>30)  printf(“%d”,a);
    }


5.	以下程序的运行结果是_____.
main()
   { int a=0,b=4,c=5;
    switch(a==0)
    {case  1: switch(b<0)
             {case  1: printf(“@”); break;
              case  0: printf(“!”); break;
             }
     case  0: switch(c==5)
             {case  0: printf(“*”); break;
              case  1: printf(“#”); break;
              default: printf(“%”);
             } break;
     default: printf(“&”);
    }
}
