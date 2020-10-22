#include <stdio.h>
 main(){
  int x;
  scanf("%d",&x);
  int i,numble=1;
  for(i=2;i<x;i++){
    if(x%i==0){
      numble=0;
      break;
    }
  } 
    if(numble==1){
      printf("是素数\n");
    }
    else{
      printf("不是素数\n");
    }
}