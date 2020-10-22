#include"stdio.h"
int swap(int *px,int *py){
   int temp = *px;
   *px = *py;
   *py = temp;
}
int main(){
   int x = 12, y =3 , z = 2;
   int *px = &x, *py = &y, *pz = &z;
   if(*px > *py){
      swap(px, py);
   }
   if(*py > *pz){
      swap(py , pz);
   }
   if(*px > *py){
      swap(px ,py);
   }
   printf("%d<%d<%d",*px, *py ,*pz);
}