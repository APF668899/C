#include "stdio.h"
#include "math.h"
main(){
	int a=6 ,b=6 ,c=6 ,s, sear;
	//scanf("",%d);
	if(a+b > c && a + c >b && b + c > a){
		s = (a+b+c)/2;
		sear = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("面积：%d",sear);
	}else{
		printf("边长不符合条件");
	}
}