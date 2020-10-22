// 题目：求出 -10 到 30 之内能被 7 或 11 整除，但不能同时被7或11 整除的所有整数。       
// 例如：输出"-7,7,11,14,21,22,28,"
#include <stdio.h> 
main(){  
  int i;
  for(i=-10;i<=30; i++){
    if((i%7==0 || i%11==0) &&i%77!=0){
      printf("%d,",i<>);            
    }    
  }
}

#include <stdio.h> 
main(){   
  int i;
  for(i=1;i<=30/7; i++){
    printf("%d,",i*7);             
    printf("%d,",i*11);  
  }
}
