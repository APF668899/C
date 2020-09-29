#include <stdio.h>
main(){
  int i,g,s,b;
  for(i=100;i<=1000;i++){
    g=i%10;
    s=i/10%10;
    b=i/100;
    if(g==s&&s==b){
       printf("%d ",i);
    }
  }
  printf("\n");
  for(int j=1,num=111;j<10;j++){
     printf("%d ",j*num);
  }
  printf("\n");
  for(int j=1,num=111,s=0;j<10;j++){
     printf("%d ",s=s+num);
  }
}
