#include <stdio.h>
#include <conio.h>
//#include <system.h>
int main()
{
	while (1)
	{
		clrscr();	//清屏
		gotoxy(30, 30);	//x,y
		printf("正在加载");
		for (int i = 40; i < 45; i++)
		{
			//clrscr();//清屏
			gotoxy(i, 30);	//x,y
			printf(".\n");
			usleep(500000);
		}
	}
	return 0;
}
