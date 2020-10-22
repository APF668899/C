#include<stdio.h>
void main(){
    int i,j;
    for(i=0;i<=10;i++)
    {
        j=i*10+6;
        if(j%3!=0&&j%6!=0)
            continue;
        printf("%d\t",j);
    }
}