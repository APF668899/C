#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number = rand()%1000 + 1;
	int n = 0;
	int a = 0;
	printf("我以经想好了一个数\n");
	while (a != number)
	{
		printf("请猜这个1到1000之间的数:\n");
		scanf("%d",&a);
		n++;
		if (a > number)
		{
			printf("你猜的数大了\n");
		} else if(a < number)
		{
			  printf("你猜的数小了\n");
		}
	}
	printf("太好了，你用了%d次猜对了答案\n",n);
	return 0;
}
