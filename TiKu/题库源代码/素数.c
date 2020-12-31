#include"stdio.h"
int isOuShuJiShu(int number){
	if(number%2==0){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d\n",isPr(num) );
		
}