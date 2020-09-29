#include"stdio.h"
//输出
int print(int arr[], int arrayLength){
    for(int i = 0; i < arrayLength; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//交集
int intersection(int arr1[],int arr2[]){
   int intersection[5] = {0},  index = 0; 
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         if(arr1[i] == arr2[j]){
             intersection[index++] = arr1[i]; 
             break;
         }
      }
   }
   printf("集合的交集是：");
   print(intersection,5);
}
//并集
int unions(int *p1, int *p2){
   int unions[10] = {0}, index = 5;
   for(int m=0; m<5; m++){
      *(unions+m)=*(p1+m);
   }
   int arrFlag=5;
   for(int i=0;i<5;i++){
      int flag=0;
      for(int j=0;j<10;j++){
         if(*(unions+j) != *(p2+i) && *(unions+j)!=0){
             ++flag;
         }
      }
      if(flag==arrFlag){
         ++arrFlag;
         *(unions+index++) = *(p2+i); 
      }
   }
   printf("集合的并集是：");
   print(unions,10);
}
//补集
int complement(int *p1, int *p2){
   int complement[10] = {0}, *com=complement;
   for(int m=0; m<5; m++){
     *(com+m)=*(p1+m);
   }
   int arrFlag=5;
   for(int i=0;i<5;i++){
      int flag=0;
      for(int j=0;j<10;j++){
         if(*(com+j) == *(p2+i) && *(com+j)!=0){
             flag=j;
             break;
         }
      }      
      *(com+flag) = 0; 
   }
   printf("集合的补集是：");
   print(com,10);
}
int main(){
   int arr1[] ={11, 22, 33, 44, 55}; 
   int arr2[] ={23, 11, 64, 55, 98};
   int arrayLength = sizeof(arr1)/4;
   printf("原集合：");
   print(arr1,arrayLength);
   print(arr2,arrayLength);
   intersection(arr1,arr2);
   unions(arr1,arr2);
   complement(arr1,arr2);
} 