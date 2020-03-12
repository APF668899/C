#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int min,max;
	printf("请输入一个最小值:");
	scanf("%d",&min);
	printf("\b请输入一个最大值:");
	scanf("%d",&max);
	srand(time(0));
	if()
	int number = rand()%1000;
	int n = 0;
	int a = 0;
	printf("我以经想好了一个数\n");
	while (a != number)
	{
		printf("请猜这个%d到%d之间的数:\n",min,max);
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
