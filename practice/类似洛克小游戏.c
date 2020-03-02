
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
 int me, megj, mejgj, mexl, a;
 int boss, bossgj, bossjgj, bossxl, b;
 int n, m, x, y, ret = 1, jsq = 0;
 me = 5000;
 megj = rand() % 100;
 boss = 5000;
 bossgj = rand() % 100;
 printf("欢迎你的到来!\n");
 while (me > 0 && boss > 0)
 {
  printf("结束游戏请按0,继续游戏请按1\n");
  scanf("%d", &n);
  if (n == 0)
  {
   printf("游戏结束,你被boss击败!!!\n");
   return 0;
  }

  if (n == 1)
  {
   printf("继续游戏!\n");
   printf("你当前血量=%d\t\t你当前攻击=%d\n", me, megj);	//血量,攻击,防御
   printf
       ("boss当前血量=%d\tboss当前攻击=%d\n",
        boss, bossgj);
   printf
       ("攻击boss请按2,增加攻击请按3,加血请按4,使用2倍伤害请按5\n");
   scanf("%d", &m);
   while (m == 5)
   {
    jsq++;
    if (m == 5 && ret % 3 == 0)
    {
     me = me - bossgj * 2;
     boss = boss - megj * 2;
     printf
         ("你还有%d滴血,boss还有%d滴血\n",
          me, boss);
     break;
    }
    if (m == 5 && ret % 3 != 0)
    {
     printf
         ("boss和你PK的总次数是3的倍数才能使用大招←←←←\n");
     printf
         ("攻击boss请按2,增加攻击请按3,加血请按4,使用大招请按5\n");
     scanf("%d", &m);
    }
   }
   if (m == 2 || m == 3 || m == 4)
   {
    if (m == 2)
    {
     x = rand() % 100;
     y = rand() % 100;
     me = me - bossgj;
     boss = boss - megj;
     printf
         ("你还有%d滴血,boss还有%d滴血\n",
          me, boss);
    }
    if (m == 3)
    {
     x = rand() % 100;
     y = rand() % 100;
     megj = megj + x;
     bossgj = bossgj + y;
     printf
         ("你当前攻击为%d,boss当前攻击为%d\n",
          megj, bossgj);
    }
    if (m == 4)
    {
     a = rand() % 100;
     b = rand() % 100;
     me = me + a;
     boss = boss + b;
     printf
         ("你已加%d滴血,boss已加%d滴血\n",
          a, b);
    }
   }
   printf
       ("******************boss和你PK了%d次*******************\n\n",
        ret++);
  }
 }
 if (me > boss)
  printf
      ("\n(｡•���-)_♡爱心发射,恭喜你胜利!\n");
 else
  printf("\n(￣����￣) 你被boss击败!\n");
 return 0;
}
