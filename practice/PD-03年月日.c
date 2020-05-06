#include <stdio.h>
//每个月份代表的天数,void①
int Customize(int month)
{
 int day;
 switch (month)
 {
 case 1:
  day = 0;
  break;
 case 2:
  day = 31;
  break;
 case 3:
  day = 59;
  break;
 case 4:
  day = 90;
  break;
 case 5:
  day = 120;
  break;
 case 6:
  day = 151;
  break;
 case 7:
  day = 181;
  break;
 case 8:
  day = 212;
  break;
 case 9:
  day = 243;
  break;
 case 10:
  day = 273;
  break;
 case 11:
  day = 304;
  break;
 case 12:
  day = 334;
  break;
 }
}

int Srdrq(int srdrq, int day)
{
 if (srdrq > day)
 {
  srdrq = srdrq - day;
  printf("离你输入的日期还有%d天\n", srdrq);
 } else
 {
  printf("你输入的日期不对\n");
 }
}

int Festival(int festival, int day)	//273,n
{
 if (festival > day)
 {
  festival = festival - day;

 } else
 {
  festival = 365 - day + festival;
 }
}

//主函数
main()
{
 int year, month, days, day;
 int ye, mo, da, srdrq;
 int NewYear, women, duanwu, children, guoqing, guanggun, festival;
 //输入 输出
 printf("请输入年,月,日:");
 scanf("%d,%d,%d", &year, &month, &days);
 day = Customize(month);	//进入void①计算今年已经过去多少天
 printf("请输入阳历节日:");
 scanf("%d,%d,%d", &ye, &month, &da);
 if (month > 1 && year % 4 == 0)	//366天
 {
  day = day + days + 1;
  printf("一年以过去%d天\n", day);
  //你输入的日期,先得到这个日期在一年中的第几天,|-输入日期
  srdrq = Customize(month) + da;
  Srdrq(srdrq, day);
  //元旦
  NewYear = 366 - day;
  printf("离元旦还有%d天\n", NewYear);
  //妇女节
  women = Customize(3);
  women = Festival(women, day) + 10;
  printf("妇女节还有%d天\n", women);
  //端午节
  duanwu = Customize(5);
  duanwu = Festival(duanwu, day) + 2;
  printf("离端午节还有%d天\n", duanwu);
  //儿童节
  children = Customize(6);
  children = Festival(children, day) + 2;
  printf("离儿童节还有%d天\n", children);
  //国庆
  guoqing = guoqing + 1;
  guoqing = Customize(10);	//进入void①,得到国庆在一年中的第几天
  festival = Festival(guoqing, day);
  printf("离国庆节还有%d天\n", guoqing);
  //双11
  guanggun = Customize(11);
  guanggun = Festival(guanggun, day) + 13;
  printf("离双11还有%d天\n", guanggun);
 } else	//365天

  day = day + days;
  printf("一年以过去%d天\n", day);
  //你输入的日期,先得到这个日期在一年中的第几天,再用当天日-输入��期
  srdrq = Customize(month) + da;
  festival = Festival(srdrq, day);
  printf("离你输入的日期还有%d天\n", festival);
  //元旦
  NewYear = 365 - day;
  printf("离元旦还有%d天\n", NewYear);
  //妇女节
  women = Customize(3);
  women = Festival(women, day) + 9;
  printf("离妇女还有%d天\n", women);
  //端午节
  duanwu = Customize(5);
  duanwu = Festival(duanwu, day) + 1;
  printf("离端午节还有%d天\n", duanwu);
  //儿童节
  children = Customize(6);
  children = Festival(children, day) + 1;
  printf("离儿童节还有%d天\n", children);
  //国庆
  guoqing = Customize(10);	//进入void①,得�����国庆在一年中的第几���
  guoqing = Festival(guoqing, day) + 1;
  printf("离国庆节还有%d天\n", guoqing);
  //双11
  guanggun = Customize(11);
  guanggun = Festival(guanggun, day) + 12;
  printf("离双11还有%d天\n", guanggun);
 }
 return 0;
}
