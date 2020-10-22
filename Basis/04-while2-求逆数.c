#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int numble,a=0;
    while(x>0){
	    numble=x%10;
	    a=a*10+numble;
	    printf("x=%d,numble=%d,a=%d\n",x,numble,a);
	    x=x/10;
    }
printf("%d",a);
}