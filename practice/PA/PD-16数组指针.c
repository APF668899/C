 #include"stdio.h"
int main(){
   int array[] = {11, 22, 33, 44, 55};
   for(int i=0; i<5;i++){
      printf("%d ", *(array+i));
   }
   printf("\n");
   for(int *p = array;p < array +5;p++){
      printf("%d ", *p);
   }
}