#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x<0){
      printf("0"); 
    }
    else if(x==0){
      printf("π");
    }
    else if(x>0){
      printf("%d",x=x+1);
    }
}