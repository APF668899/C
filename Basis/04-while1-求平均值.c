#include<stdio.h>
int main(){
    int numble,i=0;
    float sum=0;
    scanf("%d",&numble);
    while(numble!=0){
       sum+=numble;
       i++;
       scanf("%d",&numble);
    }
 printf("%.1lf",sum/i);
}