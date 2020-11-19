#include"stdio.h"
#include"math.h"
main(){
	float a,b,c;
	float disc, x, y;
	scanf("%f%f%f",&a,&b,&c);
	disc = b*b-4*a*c;
	if(disc > 0){
		x = (-b+sqrt(disc)) / (2*a);
		y = (-b-sqrt(disc)) / (2*a);		
	}else if(disc == 0){
		y = x = (-b+sqrt(disc)) / (2*a);
	}else{
		printf("error");
	}
	printf("%f %f",x,y);
}
