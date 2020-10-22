#include"stdio.h"
/*查找最大最小值。pest传入数组集合。
当choose=0时，返回最小值。当choose=1时，返回最大值。*/
int searchMinMax(int *pest,int choose){
   int arrMinMax[2];
   arrMinMax[0]=*pest;
   for(int i=0;i<10; i++){
      if(*(pest+i)<arrMinMax[0]){
         arrMinMax[0]=*(pest+i);
      }
      if(*(pest+i)>arrMinMax[1]){
         arrMinMax[1]=*(pest+i);
      }
   }
   if(choose==0){
      return arrMinMax[0];
   }else{
      return arrMinMax[1];
   }
}
int main(){
   int set[]={21,34,39,59,12,36,63,15,75,58},*pset=set;
   printf("%d",searchMinMax(pset0));
   printf("%d",searchMinMax(pset,1));
}