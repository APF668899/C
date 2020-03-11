#include <stdio.h>/ /猜数
#include <stdlib.h>
#include <time.h>

int main( )
{
srand(time(0));

int number=rand()%100+1;//生成一个100以内的数

int n=0;

int a=0;

printf( "我以经想好了1到100之间的数\n");while(a!=number)

printf( "请猜这个1到100之间的数: \n");scanf( "%d", &a);

n++ ;

if (a > number )

pr intf( "你猜的数大了\n");

} else if (a < number)

{

printf( "你猜的数小了\n");

}

}

printf("太好了,你用了%d次猜对了答案\n"，n);return 0 ;

}
